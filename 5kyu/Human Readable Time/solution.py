def make_readable(seconds):
    hours = seconds // 3600
    minutes = (seconds - 3600 * hours) // 60
    secs = seconds % 60
    return f'{hours:02d}:{minutes:02d}:{secs:02d}'
