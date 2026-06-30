#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221F30
// Address: 0x221f30 - 0x2222a0
void sub_00221F30_0x221f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221F30_0x221f30");
#endif

    switch (ctx->pc) {
        case 0x221f30u: goto label_221f30;
        case 0x221f34u: goto label_221f34;
        case 0x221f38u: goto label_221f38;
        case 0x221f3cu: goto label_221f3c;
        case 0x221f40u: goto label_221f40;
        case 0x221f44u: goto label_221f44;
        case 0x221f48u: goto label_221f48;
        case 0x221f4cu: goto label_221f4c;
        case 0x221f50u: goto label_221f50;
        case 0x221f54u: goto label_221f54;
        case 0x221f58u: goto label_221f58;
        case 0x221f5cu: goto label_221f5c;
        case 0x221f60u: goto label_221f60;
        case 0x221f64u: goto label_221f64;
        case 0x221f68u: goto label_221f68;
        case 0x221f6cu: goto label_221f6c;
        case 0x221f70u: goto label_221f70;
        case 0x221f74u: goto label_221f74;
        case 0x221f78u: goto label_221f78;
        case 0x221f7cu: goto label_221f7c;
        case 0x221f80u: goto label_221f80;
        case 0x221f84u: goto label_221f84;
        case 0x221f88u: goto label_221f88;
        case 0x221f8cu: goto label_221f8c;
        case 0x221f90u: goto label_221f90;
        case 0x221f94u: goto label_221f94;
        case 0x221f98u: goto label_221f98;
        case 0x221f9cu: goto label_221f9c;
        case 0x221fa0u: goto label_221fa0;
        case 0x221fa4u: goto label_221fa4;
        case 0x221fa8u: goto label_221fa8;
        case 0x221facu: goto label_221fac;
        case 0x221fb0u: goto label_221fb0;
        case 0x221fb4u: goto label_221fb4;
        case 0x221fb8u: goto label_221fb8;
        case 0x221fbcu: goto label_221fbc;
        case 0x221fc0u: goto label_221fc0;
        case 0x221fc4u: goto label_221fc4;
        case 0x221fc8u: goto label_221fc8;
        case 0x221fccu: goto label_221fcc;
        case 0x221fd0u: goto label_221fd0;
        case 0x221fd4u: goto label_221fd4;
        case 0x221fd8u: goto label_221fd8;
        case 0x221fdcu: goto label_221fdc;
        case 0x221fe0u: goto label_221fe0;
        case 0x221fe4u: goto label_221fe4;
        case 0x221fe8u: goto label_221fe8;
        case 0x221fecu: goto label_221fec;
        case 0x221ff0u: goto label_221ff0;
        case 0x221ff4u: goto label_221ff4;
        case 0x221ff8u: goto label_221ff8;
        case 0x221ffcu: goto label_221ffc;
        case 0x222000u: goto label_222000;
        case 0x222004u: goto label_222004;
        case 0x222008u: goto label_222008;
        case 0x22200cu: goto label_22200c;
        case 0x222010u: goto label_222010;
        case 0x222014u: goto label_222014;
        case 0x222018u: goto label_222018;
        case 0x22201cu: goto label_22201c;
        case 0x222020u: goto label_222020;
        case 0x222024u: goto label_222024;
        case 0x222028u: goto label_222028;
        case 0x22202cu: goto label_22202c;
        case 0x222030u: goto label_222030;
        case 0x222034u: goto label_222034;
        case 0x222038u: goto label_222038;
        case 0x22203cu: goto label_22203c;
        case 0x222040u: goto label_222040;
        case 0x222044u: goto label_222044;
        case 0x222048u: goto label_222048;
        case 0x22204cu: goto label_22204c;
        case 0x222050u: goto label_222050;
        case 0x222054u: goto label_222054;
        case 0x222058u: goto label_222058;
        case 0x22205cu: goto label_22205c;
        case 0x222060u: goto label_222060;
        case 0x222064u: goto label_222064;
        case 0x222068u: goto label_222068;
        case 0x22206cu: goto label_22206c;
        case 0x222070u: goto label_222070;
        case 0x222074u: goto label_222074;
        case 0x222078u: goto label_222078;
        case 0x22207cu: goto label_22207c;
        case 0x222080u: goto label_222080;
        case 0x222084u: goto label_222084;
        case 0x222088u: goto label_222088;
        case 0x22208cu: goto label_22208c;
        case 0x222090u: goto label_222090;
        case 0x222094u: goto label_222094;
        case 0x222098u: goto label_222098;
        case 0x22209cu: goto label_22209c;
        case 0x2220a0u: goto label_2220a0;
        case 0x2220a4u: goto label_2220a4;
        case 0x2220a8u: goto label_2220a8;
        case 0x2220acu: goto label_2220ac;
        case 0x2220b0u: goto label_2220b0;
        case 0x2220b4u: goto label_2220b4;
        case 0x2220b8u: goto label_2220b8;
        case 0x2220bcu: goto label_2220bc;
        case 0x2220c0u: goto label_2220c0;
        case 0x2220c4u: goto label_2220c4;
        case 0x2220c8u: goto label_2220c8;
        case 0x2220ccu: goto label_2220cc;
        case 0x2220d0u: goto label_2220d0;
        case 0x2220d4u: goto label_2220d4;
        case 0x2220d8u: goto label_2220d8;
        case 0x2220dcu: goto label_2220dc;
        case 0x2220e0u: goto label_2220e0;
        case 0x2220e4u: goto label_2220e4;
        case 0x2220e8u: goto label_2220e8;
        case 0x2220ecu: goto label_2220ec;
        case 0x2220f0u: goto label_2220f0;
        case 0x2220f4u: goto label_2220f4;
        case 0x2220f8u: goto label_2220f8;
        case 0x2220fcu: goto label_2220fc;
        case 0x222100u: goto label_222100;
        case 0x222104u: goto label_222104;
        case 0x222108u: goto label_222108;
        case 0x22210cu: goto label_22210c;
        case 0x222110u: goto label_222110;
        case 0x222114u: goto label_222114;
        case 0x222118u: goto label_222118;
        case 0x22211cu: goto label_22211c;
        case 0x222120u: goto label_222120;
        case 0x222124u: goto label_222124;
        case 0x222128u: goto label_222128;
        case 0x22212cu: goto label_22212c;
        case 0x222130u: goto label_222130;
        case 0x222134u: goto label_222134;
        case 0x222138u: goto label_222138;
        case 0x22213cu: goto label_22213c;
        case 0x222140u: goto label_222140;
        case 0x222144u: goto label_222144;
        case 0x222148u: goto label_222148;
        case 0x22214cu: goto label_22214c;
        case 0x222150u: goto label_222150;
        case 0x222154u: goto label_222154;
        case 0x222158u: goto label_222158;
        case 0x22215cu: goto label_22215c;
        case 0x222160u: goto label_222160;
        case 0x222164u: goto label_222164;
        case 0x222168u: goto label_222168;
        case 0x22216cu: goto label_22216c;
        case 0x222170u: goto label_222170;
        case 0x222174u: goto label_222174;
        case 0x222178u: goto label_222178;
        case 0x22217cu: goto label_22217c;
        case 0x222180u: goto label_222180;
        case 0x222184u: goto label_222184;
        case 0x222188u: goto label_222188;
        case 0x22218cu: goto label_22218c;
        case 0x222190u: goto label_222190;
        case 0x222194u: goto label_222194;
        case 0x222198u: goto label_222198;
        case 0x22219cu: goto label_22219c;
        case 0x2221a0u: goto label_2221a0;
        case 0x2221a4u: goto label_2221a4;
        case 0x2221a8u: goto label_2221a8;
        case 0x2221acu: goto label_2221ac;
        case 0x2221b0u: goto label_2221b0;
        case 0x2221b4u: goto label_2221b4;
        case 0x2221b8u: goto label_2221b8;
        case 0x2221bcu: goto label_2221bc;
        case 0x2221c0u: goto label_2221c0;
        case 0x2221c4u: goto label_2221c4;
        case 0x2221c8u: goto label_2221c8;
        case 0x2221ccu: goto label_2221cc;
        case 0x2221d0u: goto label_2221d0;
        case 0x2221d4u: goto label_2221d4;
        case 0x2221d8u: goto label_2221d8;
        case 0x2221dcu: goto label_2221dc;
        case 0x2221e0u: goto label_2221e0;
        case 0x2221e4u: goto label_2221e4;
        case 0x2221e8u: goto label_2221e8;
        case 0x2221ecu: goto label_2221ec;
        case 0x2221f0u: goto label_2221f0;
        case 0x2221f4u: goto label_2221f4;
        case 0x2221f8u: goto label_2221f8;
        case 0x2221fcu: goto label_2221fc;
        case 0x222200u: goto label_222200;
        case 0x222204u: goto label_222204;
        case 0x222208u: goto label_222208;
        case 0x22220cu: goto label_22220c;
        case 0x222210u: goto label_222210;
        case 0x222214u: goto label_222214;
        case 0x222218u: goto label_222218;
        case 0x22221cu: goto label_22221c;
        case 0x222220u: goto label_222220;
        case 0x222224u: goto label_222224;
        case 0x222228u: goto label_222228;
        case 0x22222cu: goto label_22222c;
        case 0x222230u: goto label_222230;
        case 0x222234u: goto label_222234;
        case 0x222238u: goto label_222238;
        case 0x22223cu: goto label_22223c;
        case 0x222240u: goto label_222240;
        case 0x222244u: goto label_222244;
        case 0x222248u: goto label_222248;
        case 0x22224cu: goto label_22224c;
        case 0x222250u: goto label_222250;
        case 0x222254u: goto label_222254;
        case 0x222258u: goto label_222258;
        case 0x22225cu: goto label_22225c;
        case 0x222260u: goto label_222260;
        case 0x222264u: goto label_222264;
        case 0x222268u: goto label_222268;
        case 0x22226cu: goto label_22226c;
        case 0x222270u: goto label_222270;
        case 0x222274u: goto label_222274;
        case 0x222278u: goto label_222278;
        case 0x22227cu: goto label_22227c;
        case 0x222280u: goto label_222280;
        case 0x222284u: goto label_222284;
        case 0x222288u: goto label_222288;
        case 0x22228cu: goto label_22228c;
        case 0x222290u: goto label_222290;
        case 0x222294u: goto label_222294;
        case 0x222298u: goto label_222298;
        case 0x22229cu: goto label_22229c;
        default: break;
    }

    ctx->pc = 0x221f30u;

label_221f30:
    // 0x221f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x221f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_221f34:
    // 0x221f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x221f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221f38:
    // 0x221f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x221f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_221f3c:
    // 0x221f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x221f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_221f40:
    // 0x221f40: 0xc08d340  jal         func_234D00
label_221f44:
    if (ctx->pc == 0x221F44u) {
        ctx->pc = 0x221F44u;
            // 0x221f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x221F48u;
        goto label_221f48;
    }
    ctx->pc = 0x221F40u;
    SET_GPR_U32(ctx, 31, 0x221F48u);
    ctx->pc = 0x221F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221F40u;
            // 0x221f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D00u;
    if (runtime->hasFunction(0x234D00u)) {
        auto targetFn = runtime->lookupFunction(0x234D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F48u; }
        if (ctx->pc != 0x221F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D00_0x234d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221F48u; }
        if (ctx->pc != 0x221F48u) { return; }
    }
    ctx->pc = 0x221F48u;
label_221f48:
    // 0x221f48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x221f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_221f4c:
    // 0x221f4c: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x221f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_221f50:
    // 0x221f50: 0x2442e9b0  addiu       $v0, $v0, -0x1650
    ctx->pc = 0x221f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961584));
label_221f54:
    // 0x221f54: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x221f54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_221f58:
    // 0x221f58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x221f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_221f5c:
    // 0x221f5c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x221f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_221f60:
    // 0x221f60: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x221f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_221f64:
    // 0x221f64: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x221f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_221f68:
    // 0x221f68: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x221f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_221f6c:
    // 0x221f6c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x221f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_221f70:
    // 0x221f70: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x221f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_221f74:
    // 0x221f74: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x221f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_221f78:
    // 0x221f78: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x221f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_221f7c:
    // 0x221f7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x221f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_221f80:
    // 0x221f80: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x221f80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_221f84:
    // 0x221f84: 0xa6000074  sh          $zero, 0x74($s0)
    ctx->pc = 0x221f84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 0));
label_221f88:
    // 0x221f88: 0xa60a0076  sh          $t2, 0x76($s0)
    ctx->pc = 0x221f88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 10));
label_221f8c:
    // 0x221f8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x221f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_221f90:
    // 0x221f90: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x221f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_221f94:
    // 0x221f94: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x221f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_221f98:
    // 0x221f98: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x221f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_221f9c:
    // 0x221f9c: 0x2529d430  addiu       $t1, $t1, -0x2BD0
    ctx->pc = 0x221f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956080));
label_221fa0:
    // 0x221fa0: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x221fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_221fa4:
    // 0x221fa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x221fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221fa8:
    // 0x221fa8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x221fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_221fac:
    // 0x221fac: 0x24e7ec30  addiu       $a3, $a3, -0x13D0
    ctx->pc = 0x221facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962224));
label_221fb0:
    // 0x221fb0: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x221fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_221fb4:
    // 0x221fb4: 0x24c6ed90  addiu       $a2, $a2, -0x1270
    ctx->pc = 0x221fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962576));
label_221fb8:
    // 0x221fb8: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x221fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_221fbc:
    // 0x221fbc: 0x24a5eb20  addiu       $a1, $a1, -0x14E0
    ctx->pc = 0x221fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
label_221fc0:
    // 0x221fc0: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x221fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_221fc4:
    // 0x221fc4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x221fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_221fc8:
    // 0x221fc8: 0xae0900a0  sw          $t1, 0xA0($s0)
    ctx->pc = 0x221fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 9));
label_221fcc:
    // 0x221fcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x221fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_221fd0:
    // 0x221fd0: 0xa60800a6  sh          $t0, 0xA6($s0)
    ctx->pc = 0x221fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 166), (uint16_t)GPR_U32(ctx, 8));
label_221fd4:
    // 0x221fd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x221fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_221fd8:
    // 0x221fd8: 0xae0700a0  sw          $a3, 0xA0($s0)
    ctx->pc = 0x221fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 7));
label_221fdc:
    // 0x221fdc: 0xae0600a0  sw          $a2, 0xA0($s0)
    ctx->pc = 0x221fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 6));
label_221fe0:
    // 0x221fe0: 0xae0001c0  sw          $zero, 0x1C0($s0)
    ctx->pc = 0x221fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
label_221fe4:
    // 0x221fe4: 0xae0500a0  sw          $a1, 0xA0($s0)
    ctx->pc = 0x221fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 5));
label_221fe8:
    // 0x221fe8: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x221fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
label_221fec:
    // 0x221fec: 0xa60001d4  sh          $zero, 0x1D4($s0)
    ctx->pc = 0x221fecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 468), (uint16_t)GPR_U32(ctx, 0));
label_221ff0:
    // 0x221ff0: 0xa60a01d6  sh          $t2, 0x1D6($s0)
    ctx->pc = 0x221ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 470), (uint16_t)GPR_U32(ctx, 10));
label_221ff4:
    // 0x221ff4: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x221ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
label_221ff8:
    // 0x221ff8: 0xa60001dc  sh          $zero, 0x1DC($s0)
    ctx->pc = 0x221ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 476), (uint16_t)GPR_U32(ctx, 0));
label_221ffc:
    // 0x221ffc: 0xa60a01de  sh          $t2, 0x1DE($s0)
    ctx->pc = 0x221ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 478), (uint16_t)GPR_U32(ctx, 10));
label_222000:
    // 0x222000: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x222000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
label_222004:
    // 0x222004: 0xa60001e4  sh          $zero, 0x1E4($s0)
    ctx->pc = 0x222004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 484), (uint16_t)GPR_U32(ctx, 0));
label_222008:
    // 0x222008: 0xa60a01e6  sh          $t2, 0x1E6($s0)
    ctx->pc = 0x222008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 486), (uint16_t)GPR_U32(ctx, 10));
label_22200c:
    // 0x22200c: 0xae0001e8  sw          $zero, 0x1E8($s0)
    ctx->pc = 0x22200cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 0));
label_222010:
    // 0x222010: 0xa60001ec  sh          $zero, 0x1EC($s0)
    ctx->pc = 0x222010u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 0));
label_222014:
    // 0x222014: 0xa60a01ee  sh          $t2, 0x1EE($s0)
    ctx->pc = 0x222014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 10));
label_222018:
    // 0x222018: 0xa604006c  sh          $a0, 0x6C($s0)
    ctx->pc = 0x222018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 4));
label_22201c:
    // 0x22201c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x22201cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_222020:
    // 0x222020: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x222020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_222024:
    // 0x222024: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x222024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_222028:
    // 0x222028: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x222028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
label_22202c:
    // 0x22202c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x22202cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_222030:
    // 0x222030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222034:
    // 0x222034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222038:
    // 0x222038: 0x3e00008  jr          $ra
label_22203c:
    if (ctx->pc == 0x22203Cu) {
        ctx->pc = 0x22203Cu;
            // 0x22203c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x222040u;
        goto label_222040;
    }
    ctx->pc = 0x222038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22203Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222038u;
            // 0x22203c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222040u;
label_222040:
    // 0x222040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_222044:
    // 0x222044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_222048:
    // 0x222048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22204c:
    // 0x22204c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_222050:
    // 0x222050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222054:
    // 0x222054: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_222058:
    if (ctx->pc == 0x222058u) {
        ctx->pc = 0x222058u;
            // 0x222058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22205Cu;
        goto label_22205c;
    }
    ctx->pc = 0x222054u;
    {
        const bool branch_taken_0x222054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x222058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222054u;
            // 0x222058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222054) {
            ctx->pc = 0x222098u;
            goto label_222098;
        }
    }
    ctx->pc = 0x22205Cu;
label_22205c:
    // 0x22205c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_222060:
    // 0x222060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222064:
    // 0x222064: 0x2442eb20  addiu       $v0, $v0, -0x14E0
    ctx->pc = 0x222064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961952));
label_222068:
    // 0x222068: 0xc0899ac  jal         func_2266B0
label_22206c:
    if (ctx->pc == 0x22206Cu) {
        ctx->pc = 0x22206Cu;
            // 0x22206c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x222070u;
        goto label_222070;
    }
    ctx->pc = 0x222068u;
    SET_GPR_U32(ctx, 31, 0x222070u);
    ctx->pc = 0x22206Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222068u;
            // 0x22206c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2266B0u;
    if (runtime->hasFunction(0x2266B0u)) {
        auto targetFn = runtime->lookupFunction(0x2266B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222070u; }
        if (ctx->pc != 0x222070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002266B0_0x2266b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222070u; }
        if (ctx->pc != 0x222070u) { return; }
    }
    ctx->pc = 0x222070u;
label_222070:
    // 0x222070: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x222070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_222074:
    // 0x222074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_222078:
    // 0x222078: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_22207c:
    if (ctx->pc == 0x22207Cu) {
        ctx->pc = 0x22207Cu;
            // 0x22207c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222080u;
        goto label_222080;
    }
    ctx->pc = 0x222078u;
    {
        const bool branch_taken_0x222078 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222078) {
            ctx->pc = 0x22207Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222078u;
            // 0x22207c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22209Cu;
            goto label_22209c;
        }
    }
    ctx->pc = 0x222080u;
label_222080:
    // 0x222080: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222084:
    // 0x222084: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x222084u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_222088:
    // 0x222088: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_22208c:
    // 0x22208c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222090:
    // 0x222090: 0xc0a7ab4  jal         func_29EAD0
label_222094:
    if (ctx->pc == 0x222094u) {
        ctx->pc = 0x222094u;
            // 0x222094: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x222098u;
        goto label_222098;
    }
    ctx->pc = 0x222090u;
    SET_GPR_U32(ctx, 31, 0x222098u);
    ctx->pc = 0x222094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222090u;
            // 0x222094: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222098u; }
        if (ctx->pc != 0x222098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222098u; }
        if (ctx->pc != 0x222098u) { return; }
    }
    ctx->pc = 0x222098u;
label_222098:
    // 0x222098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x222098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22209c:
    // 0x22209c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2220a0:
    // 0x2220a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2220a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2220a4:
    // 0x2220a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2220a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2220a8:
    // 0x2220a8: 0x3e00008  jr          $ra
label_2220ac:
    if (ctx->pc == 0x2220ACu) {
        ctx->pc = 0x2220ACu;
            // 0x2220ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2220B0u;
        goto label_2220b0;
    }
    ctx->pc = 0x2220A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2220ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2220A8u;
            // 0x2220ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2220B0u;
label_2220b0:
    // 0x2220b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2220b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2220b4:
    // 0x2220b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2220b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2220b8:
    // 0x2220b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2220b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2220bc:
    // 0x2220bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2220bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2220c0:
    // 0x2220c0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_2220c4:
    if (ctx->pc == 0x2220C4u) {
        ctx->pc = 0x2220C4u;
            // 0x2220c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2220C8u;
        goto label_2220c8;
    }
    ctx->pc = 0x2220C0u;
    {
        const bool branch_taken_0x2220c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2220c0) {
            ctx->pc = 0x2220C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2220C0u;
            // 0x2220c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222120u;
            goto label_222120;
        }
    }
    ctx->pc = 0x2220C8u;
label_2220c8:
    // 0x2220c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2220c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2220cc:
    // 0x2220cc: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x2220ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_2220d0:
    // 0x2220d0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2220d4:
    if (ctx->pc == 0x2220D4u) {
        ctx->pc = 0x2220D4u;
            // 0x2220d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2220D8u;
        goto label_2220d8;
    }
    ctx->pc = 0x2220D0u;
    {
        const bool branch_taken_0x2220d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2220D0u;
            // 0x2220d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220d0) {
            ctx->pc = 0x2220F4u;
            goto label_2220f4;
        }
    }
    ctx->pc = 0x2220D8u;
label_2220d8:
    // 0x2220d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2220dc:
    // 0x2220dc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2220dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2220e0:
    // 0x2220e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2220e4:
    if (ctx->pc == 0x2220E4u) {
        ctx->pc = 0x2220E4u;
            // 0x2220e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2220E8u;
        goto label_2220e8;
    }
    ctx->pc = 0x2220E0u;
    {
        const bool branch_taken_0x2220e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2220E0u;
            // 0x2220e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220e0) {
            ctx->pc = 0x2220F4u;
            goto label_2220f4;
        }
    }
    ctx->pc = 0x2220E8u;
label_2220e8:
    // 0x2220e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2220e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2220ec:
    // 0x2220ec: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2220ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2220f0:
    // 0x2220f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2220f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2220f4:
    // 0x2220f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2220f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2220f8:
    // 0x2220f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2220f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2220fc:
    // 0x2220fc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_222100:
    if (ctx->pc == 0x222100u) {
        ctx->pc = 0x222104u;
        goto label_222104;
    }
    ctx->pc = 0x2220FCu;
    {
        const bool branch_taken_0x2220fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2220fc) {
            ctx->pc = 0x22211Cu;
            goto label_22211c;
        }
    }
    ctx->pc = 0x222104u;
label_222104:
    // 0x222104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222108:
    // 0x222108: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x222108u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_22210c:
    // 0x22210c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22210cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222110:
    // 0x222110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x222110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222114:
    // 0x222114: 0xc0a7ab4  jal         func_29EAD0
label_222118:
    if (ctx->pc == 0x222118u) {
        ctx->pc = 0x222118u;
            // 0x222118: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x22211Cu;
        goto label_22211c;
    }
    ctx->pc = 0x222114u;
    SET_GPR_U32(ctx, 31, 0x22211Cu);
    ctx->pc = 0x222118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222114u;
            // 0x222118: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22211Cu; }
        if (ctx->pc != 0x22211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22211Cu; }
        if (ctx->pc != 0x22211Cu) { return; }
    }
    ctx->pc = 0x22211Cu;
label_22211c:
    // 0x22211c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22211cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222120:
    // 0x222120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_222124:
    // 0x222124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222128:
    // 0x222128: 0x3e00008  jr          $ra
label_22212c:
    if (ctx->pc == 0x22212Cu) {
        ctx->pc = 0x22212Cu;
            // 0x22212c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x222130u;
        goto label_222130;
    }
    ctx->pc = 0x222128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222128u;
            // 0x22212c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222130u;
label_222130:
    // 0x222130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_222134:
    // 0x222134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_222138:
    // 0x222138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22213c:
    // 0x22213c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22213cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_222140:
    // 0x222140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_222144:
    // 0x222144: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
label_222148:
    if (ctx->pc == 0x222148u) {
        ctx->pc = 0x222148u;
            // 0x222148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22214Cu;
        goto label_22214c;
    }
    ctx->pc = 0x222144u;
    {
        const bool branch_taken_0x222144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x222148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222144u;
            // 0x222148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222144) {
            ctx->pc = 0x222284u;
            goto label_222284;
        }
    }
    ctx->pc = 0x22214Cu;
label_22214c:
    // 0x22214c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22214cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_222150:
    // 0x222150: 0x2442f0e0  addiu       $v0, $v0, -0xF20
    ctx->pc = 0x222150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
label_222154:
    // 0x222154: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x222154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_222158:
    // 0x222158: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x222158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_22215c:
    // 0x22215c: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_222160:
    if (ctx->pc == 0x222160u) {
        ctx->pc = 0x222160u;
            // 0x222160: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->pc = 0x222164u;
        goto label_222164;
    }
    ctx->pc = 0x22215Cu;
    {
        const bool branch_taken_0x22215c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22215c) {
            ctx->pc = 0x222160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22215Cu;
            // 0x222160: 0x2622004c  addiu       $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2221A8u;
            goto label_2221a8;
        }
    }
    ctx->pc = 0x222164u;
label_222164:
    // 0x222164: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x222164u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_222168:
    // 0x222168: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_22216c:
    if (ctx->pc == 0x22216Cu) {
        ctx->pc = 0x222170u;
        goto label_222170;
    }
    ctx->pc = 0x222168u;
    {
        const bool branch_taken_0x222168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222168) {
            ctx->pc = 0x2221A4u;
            goto label_2221a4;
        }
    }
    ctx->pc = 0x222170u;
label_222170:
    // 0x222170: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_222174:
    // 0x222174: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x222174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_222178:
    // 0x222178: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x222178u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_22217c:
    // 0x22217c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_222180:
    // 0x222180: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_222184:
    // 0x222184: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_222188:
    if (ctx->pc == 0x222188u) {
        ctx->pc = 0x22218Cu;
        goto label_22218c;
    }
    ctx->pc = 0x222184u;
    {
        const bool branch_taken_0x222184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222184) {
            ctx->pc = 0x2221A4u;
            goto label_2221a4;
        }
    }
    ctx->pc = 0x22218Cu;
label_22218c:
    // 0x22218c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_222190:
    if (ctx->pc == 0x222190u) {
        ctx->pc = 0x222194u;
        goto label_222194;
    }
    ctx->pc = 0x22218Cu;
    {
        const bool branch_taken_0x22218c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22218c) {
            ctx->pc = 0x2221A4u;
            goto label_2221a4;
        }
    }
    ctx->pc = 0x222194u;
label_222194:
    // 0x222194: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x222194u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222198:
    // 0x222198: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_22219c:
    // 0x22219c: 0x320f809  jalr        $t9
label_2221a0:
    if (ctx->pc == 0x2221A0u) {
        ctx->pc = 0x2221A0u;
            // 0x2221a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2221A4u;
        goto label_2221a4;
    }
    ctx->pc = 0x22219Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2221A4u);
        ctx->pc = 0x2221A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22219Cu;
            // 0x2221a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2221A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2221A4u; }
            if (ctx->pc != 0x2221A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2221A4u;
label_2221a4:
    // 0x2221a4: 0x2622004c  addiu       $v0, $s1, 0x4C
    ctx->pc = 0x2221a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_2221a8:
    // 0x2221a8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_2221ac:
    if (ctx->pc == 0x2221ACu) {
        ctx->pc = 0x2221ACu;
            // 0x2221ac: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2221B0u;
        goto label_2221b0;
    }
    ctx->pc = 0x2221A8u;
    {
        const bool branch_taken_0x2221a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2221a8) {
            ctx->pc = 0x2221ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2221A8u;
            // 0x2221ac: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2221ECu;
            goto label_2221ec;
        }
    }
    ctx->pc = 0x2221B0u;
label_2221b0:
    // 0x2221b0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2221b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2221b4:
    // 0x2221b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2221b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2221b8:
    // 0x2221b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2221b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2221bc:
    // 0x2221bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2221c0:
    if (ctx->pc == 0x2221C0u) {
        ctx->pc = 0x2221C4u;
        goto label_2221c4;
    }
    ctx->pc = 0x2221BCu;
    {
        const bool branch_taken_0x2221bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2221bc) {
            ctx->pc = 0x2221E8u;
            goto label_2221e8;
        }
    }
    ctx->pc = 0x2221C4u;
label_2221c4:
    // 0x2221c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2221c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2221c8:
    // 0x2221c8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2221c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2221cc:
    // 0x2221cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2221ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2221d0:
    // 0x2221d0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2221d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2221d4:
    // 0x2221d4: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x2221d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2221d8:
    // 0x2221d8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x2221d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2221dc:
    // 0x2221dc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2221dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2221e0:
    // 0x2221e0: 0xc0a7ab4  jal         func_29EAD0
label_2221e4:
    if (ctx->pc == 0x2221E4u) {
        ctx->pc = 0x2221E4u;
            // 0x2221e4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2221E8u;
        goto label_2221e8;
    }
    ctx->pc = 0x2221E0u;
    SET_GPR_U32(ctx, 31, 0x2221E8u);
    ctx->pc = 0x2221E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2221E0u;
            // 0x2221e4: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221E8u; }
        if (ctx->pc != 0x2221E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2221E8u; }
        if (ctx->pc != 0x2221E8u) { return; }
    }
    ctx->pc = 0x2221E8u;
label_2221e8:
    // 0x2221e8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2221e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2221ec:
    // 0x2221ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2221f0:
    if (ctx->pc == 0x2221F0u) {
        ctx->pc = 0x2221F4u;
        goto label_2221f4;
    }
    ctx->pc = 0x2221ECu;
    {
        const bool branch_taken_0x2221ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2221ec) {
            ctx->pc = 0x222238u;
            goto label_222238;
        }
    }
    ctx->pc = 0x2221F4u;
label_2221f4:
    // 0x2221f4: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x2221f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_2221f8:
    // 0x2221f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2221fc:
    if (ctx->pc == 0x2221FCu) {
        ctx->pc = 0x222200u;
        goto label_222200;
    }
    ctx->pc = 0x2221F8u;
    {
        const bool branch_taken_0x2221f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2221f8) {
            ctx->pc = 0x222238u;
            goto label_222238;
        }
    }
    ctx->pc = 0x222200u;
label_222200:
    // 0x222200: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x222200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_222204:
    // 0x222204: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x222204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_222208:
    // 0x222208: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x222208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22220c:
    // 0x22220c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_222210:
    if (ctx->pc == 0x222210u) {
        ctx->pc = 0x222214u;
        goto label_222214;
    }
    ctx->pc = 0x22220Cu;
    {
        const bool branch_taken_0x22220c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22220c) {
            ctx->pc = 0x222238u;
            goto label_222238;
        }
    }
    ctx->pc = 0x222214u;
label_222214:
    // 0x222214: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x222214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222218:
    // 0x222218: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x222218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_22221c:
    // 0x22221c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x22221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222220:
    // 0x222220: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x222220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_222224:
    // 0x222224: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_222228:
    // 0x222228: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x222228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_22222c:
    // 0x22222c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x22222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_222230:
    // 0x222230: 0xc0a7ab4  jal         func_29EAD0
label_222234:
    if (ctx->pc == 0x222234u) {
        ctx->pc = 0x222234u;
            // 0x222234: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x222238u;
        goto label_222238;
    }
    ctx->pc = 0x222230u;
    SET_GPR_U32(ctx, 31, 0x222238u);
    ctx->pc = 0x222234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222230u;
            // 0x222234: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222238u; }
        if (ctx->pc != 0x222238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222238u; }
        if (ctx->pc != 0x222238u) { return; }
    }
    ctx->pc = 0x222238u;
label_222238:
    // 0x222238: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_22223c:
    if (ctx->pc == 0x22223Cu) {
        ctx->pc = 0x22223Cu;
            // 0x22223c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x222240u;
        goto label_222240;
    }
    ctx->pc = 0x222238u;
    {
        const bool branch_taken_0x222238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x222238) {
            ctx->pc = 0x22223Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222238u;
            // 0x22223c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222260u;
            goto label_222260;
        }
    }
    ctx->pc = 0x222240u;
label_222240:
    // 0x222240: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_222244:
    // 0x222244: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x222244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_222248:
    // 0x222248: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_22224c:
    if (ctx->pc == 0x22224Cu) {
        ctx->pc = 0x22224Cu;
            // 0x22224c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x222250u;
        goto label_222250;
    }
    ctx->pc = 0x222248u;
    {
        const bool branch_taken_0x222248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222248u;
            // 0x22224c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222248) {
            ctx->pc = 0x22225Cu;
            goto label_22225c;
        }
    }
    ctx->pc = 0x222250u;
label_222250:
    // 0x222250: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_222254:
    // 0x222254: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x222254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_222258:
    // 0x222258: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x222258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22225c:
    // 0x22225c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x22225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_222260:
    // 0x222260: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222260u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_222264:
    // 0x222264: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_222268:
    if (ctx->pc == 0x222268u) {
        ctx->pc = 0x222268u;
            // 0x222268: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22226Cu;
        goto label_22226c;
    }
    ctx->pc = 0x222264u;
    {
        const bool branch_taken_0x222264 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222264) {
            ctx->pc = 0x222268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222264u;
            // 0x222268: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222288u;
            goto label_222288;
        }
    }
    ctx->pc = 0x22226Cu;
label_22226c:
    // 0x22226c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22226cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_222270:
    // 0x222270: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x222270u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_222274:
    // 0x222274: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x222274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_222278:
    // 0x222278: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x222278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22227c:
    // 0x22227c: 0xc0a7ab4  jal         func_29EAD0
label_222280:
    if (ctx->pc == 0x222280u) {
        ctx->pc = 0x222280u;
            // 0x222280: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x222284u;
        goto label_222284;
    }
    ctx->pc = 0x22227Cu;
    SET_GPR_U32(ctx, 31, 0x222284u);
    ctx->pc = 0x222280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22227Cu;
            // 0x222280: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222284u; }
        if (ctx->pc != 0x222284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222284u; }
        if (ctx->pc != 0x222284u) { return; }
    }
    ctx->pc = 0x222284u;
label_222284:
    // 0x222284: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x222284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_222288:
    // 0x222288: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22228c:
    // 0x22228c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22228cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_222290:
    // 0x222290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222294:
    // 0x222294: 0x3e00008  jr          $ra
label_222298:
    if (ctx->pc == 0x222298u) {
        ctx->pc = 0x222298u;
            // 0x222298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x22229Cu;
        goto label_22229c;
    }
    ctx->pc = 0x222294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222294u;
            // 0x222298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22229Cu;
label_22229c:
    // 0x22229c: 0x0  nop
    ctx->pc = 0x22229cu;
    // NOP
}
