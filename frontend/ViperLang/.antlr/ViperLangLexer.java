// Generated from /home/alex/mipt/LLVM/frontend/ViperLang/ViperLang.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue", "this-escape"})
public class ViperLangLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, NAME=19, INT=20, STATEMENT=21, WS=22;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
			"T__17", "NAME", "INT", "STATEMENT", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'function'", "'('", "','", "')'", "'end'", "'int'", "';'", "'='", 
			"'*'", "'/'", "'+'", "'-'", "'if'", "'and'", "'or'", "'<'", "'>'", "'for'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, "NAME", "INT", "STATEMENT", 
			"WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public ViperLangLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "ViperLang.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u0016x\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002"+
		"\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002"+
		"\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002"+
		"\u0015\u0007\u0015\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001"+
		"\u0001\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001\b"+
		"\u0001\t\u0001\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001"+
		"\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000e\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001"+
		"\u0011\u0001\u0011\u0001\u0011\u0001\u0012\u0004\u0012d\b\u0012\u000b"+
		"\u0012\f\u0012e\u0001\u0013\u0004\u0013i\b\u0013\u000b\u0013\f\u0013j"+
		"\u0001\u0014\u0004\u0014n\b\u0014\u000b\u0014\f\u0014o\u0001\u0015\u0004"+
		"\u0015s\b\u0015\u000b\u0015\f\u0015t\u0001\u0015\u0001\u0015\u0000\u0000"+
		"\u0016\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006"+
		"\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e"+
		"\u001d\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016\u0001"+
		"\u0000\u0004\u0003\u0000AZ__az\u0001\u000009\u0002\u0000AZaz\u0003\u0000"+
		"\t\n\r\r  {\u0000\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000"+
		"\u0000\u0000\u0000\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000"+
		"\u0000\u0000\u0000\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000"+
		"\u0000\u0000\r\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000"+
		"\u0000\u0011\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000"+
		"\u0000\u0015\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000"+
		"\u0000\u0019\u0001\u0000\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000"+
		"\u0000\u001d\u0001\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000"+
		"\u0000!\u0001\u0000\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%"+
		"\u0001\u0000\u0000\u0000\u0000\'\u0001\u0000\u0000\u0000\u0000)\u0001"+
		"\u0000\u0000\u0000\u0000+\u0001\u0000\u0000\u0000\u0001-\u0001\u0000\u0000"+
		"\u0000\u00036\u0001\u0000\u0000\u0000\u00058\u0001\u0000\u0000\u0000\u0007"+
		":\u0001\u0000\u0000\u0000\t<\u0001\u0000\u0000\u0000\u000b@\u0001\u0000"+
		"\u0000\u0000\rD\u0001\u0000\u0000\u0000\u000fF\u0001\u0000\u0000\u0000"+
		"\u0011H\u0001\u0000\u0000\u0000\u0013J\u0001\u0000\u0000\u0000\u0015L"+
		"\u0001\u0000\u0000\u0000\u0017N\u0001\u0000\u0000\u0000\u0019P\u0001\u0000"+
		"\u0000\u0000\u001bS\u0001\u0000\u0000\u0000\u001dW\u0001\u0000\u0000\u0000"+
		"\u001fZ\u0001\u0000\u0000\u0000!\\\u0001\u0000\u0000\u0000#^\u0001\u0000"+
		"\u0000\u0000%c\u0001\u0000\u0000\u0000\'h\u0001\u0000\u0000\u0000)m\u0001"+
		"\u0000\u0000\u0000+r\u0001\u0000\u0000\u0000-.\u0005f\u0000\u0000./\u0005"+
		"u\u0000\u0000/0\u0005n\u0000\u000001\u0005c\u0000\u000012\u0005t\u0000"+
		"\u000023\u0005i\u0000\u000034\u0005o\u0000\u000045\u0005n\u0000\u0000"+
		"5\u0002\u0001\u0000\u0000\u000067\u0005(\u0000\u00007\u0004\u0001\u0000"+
		"\u0000\u000089\u0005,\u0000\u00009\u0006\u0001\u0000\u0000\u0000:;\u0005"+
		")\u0000\u0000;\b\u0001\u0000\u0000\u0000<=\u0005e\u0000\u0000=>\u0005"+
		"n\u0000\u0000>?\u0005d\u0000\u0000?\n\u0001\u0000\u0000\u0000@A\u0005"+
		"i\u0000\u0000AB\u0005n\u0000\u0000BC\u0005t\u0000\u0000C\f\u0001\u0000"+
		"\u0000\u0000DE\u0005;\u0000\u0000E\u000e\u0001\u0000\u0000\u0000FG\u0005"+
		"=\u0000\u0000G\u0010\u0001\u0000\u0000\u0000HI\u0005*\u0000\u0000I\u0012"+
		"\u0001\u0000\u0000\u0000JK\u0005/\u0000\u0000K\u0014\u0001\u0000\u0000"+
		"\u0000LM\u0005+\u0000\u0000M\u0016\u0001\u0000\u0000\u0000NO\u0005-\u0000"+
		"\u0000O\u0018\u0001\u0000\u0000\u0000PQ\u0005i\u0000\u0000QR\u0005f\u0000"+
		"\u0000R\u001a\u0001\u0000\u0000\u0000ST\u0005a\u0000\u0000TU\u0005n\u0000"+
		"\u0000UV\u0005d\u0000\u0000V\u001c\u0001\u0000\u0000\u0000WX\u0005o\u0000"+
		"\u0000XY\u0005r\u0000\u0000Y\u001e\u0001\u0000\u0000\u0000Z[\u0005<\u0000"+
		"\u0000[ \u0001\u0000\u0000\u0000\\]\u0005>\u0000\u0000]\"\u0001\u0000"+
		"\u0000\u0000^_\u0005f\u0000\u0000_`\u0005o\u0000\u0000`a\u0005r\u0000"+
		"\u0000a$\u0001\u0000\u0000\u0000bd\u0007\u0000\u0000\u0000cb\u0001\u0000"+
		"\u0000\u0000de\u0001\u0000\u0000\u0000ec\u0001\u0000\u0000\u0000ef\u0001"+
		"\u0000\u0000\u0000f&\u0001\u0000\u0000\u0000gi\u0007\u0001\u0000\u0000"+
		"hg\u0001\u0000\u0000\u0000ij\u0001\u0000\u0000\u0000jh\u0001\u0000\u0000"+
		"\u0000jk\u0001\u0000\u0000\u0000k(\u0001\u0000\u0000\u0000ln\u0007\u0002"+
		"\u0000\u0000ml\u0001\u0000\u0000\u0000no\u0001\u0000\u0000\u0000om\u0001"+
		"\u0000\u0000\u0000op\u0001\u0000\u0000\u0000p*\u0001\u0000\u0000\u0000"+
		"qs\u0007\u0003\u0000\u0000rq\u0001\u0000\u0000\u0000st\u0001\u0000\u0000"+
		"\u0000tr\u0001\u0000\u0000\u0000tu\u0001\u0000\u0000\u0000uv\u0001\u0000"+
		"\u0000\u0000vw\u0006\u0015\u0000\u0000w,\u0001\u0000\u0000\u0000\u0005"+
		"\u0000ejot\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}