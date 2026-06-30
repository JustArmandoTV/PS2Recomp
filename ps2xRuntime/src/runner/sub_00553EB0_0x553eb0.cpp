#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00553EB0
// Address: 0x553eb0 - 0x554250
void sub_00553EB0_0x553eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00553EB0_0x553eb0");
#endif

    switch (ctx->pc) {
        case 0x553eb0u: goto label_553eb0;
        case 0x553eb4u: goto label_553eb4;
        case 0x553eb8u: goto label_553eb8;
        case 0x553ebcu: goto label_553ebc;
        case 0x553ec0u: goto label_553ec0;
        case 0x553ec4u: goto label_553ec4;
        case 0x553ec8u: goto label_553ec8;
        case 0x553eccu: goto label_553ecc;
        case 0x553ed0u: goto label_553ed0;
        case 0x553ed4u: goto label_553ed4;
        case 0x553ed8u: goto label_553ed8;
        case 0x553edcu: goto label_553edc;
        case 0x553ee0u: goto label_553ee0;
        case 0x553ee4u: goto label_553ee4;
        case 0x553ee8u: goto label_553ee8;
        case 0x553eecu: goto label_553eec;
        case 0x553ef0u: goto label_553ef0;
        case 0x553ef4u: goto label_553ef4;
        case 0x553ef8u: goto label_553ef8;
        case 0x553efcu: goto label_553efc;
        case 0x553f00u: goto label_553f00;
        case 0x553f04u: goto label_553f04;
        case 0x553f08u: goto label_553f08;
        case 0x553f0cu: goto label_553f0c;
        case 0x553f10u: goto label_553f10;
        case 0x553f14u: goto label_553f14;
        case 0x553f18u: goto label_553f18;
        case 0x553f1cu: goto label_553f1c;
        case 0x553f20u: goto label_553f20;
        case 0x553f24u: goto label_553f24;
        case 0x553f28u: goto label_553f28;
        case 0x553f2cu: goto label_553f2c;
        case 0x553f30u: goto label_553f30;
        case 0x553f34u: goto label_553f34;
        case 0x553f38u: goto label_553f38;
        case 0x553f3cu: goto label_553f3c;
        case 0x553f40u: goto label_553f40;
        case 0x553f44u: goto label_553f44;
        case 0x553f48u: goto label_553f48;
        case 0x553f4cu: goto label_553f4c;
        case 0x553f50u: goto label_553f50;
        case 0x553f54u: goto label_553f54;
        case 0x553f58u: goto label_553f58;
        case 0x553f5cu: goto label_553f5c;
        case 0x553f60u: goto label_553f60;
        case 0x553f64u: goto label_553f64;
        case 0x553f68u: goto label_553f68;
        case 0x553f6cu: goto label_553f6c;
        case 0x553f70u: goto label_553f70;
        case 0x553f74u: goto label_553f74;
        case 0x553f78u: goto label_553f78;
        case 0x553f7cu: goto label_553f7c;
        case 0x553f80u: goto label_553f80;
        case 0x553f84u: goto label_553f84;
        case 0x553f88u: goto label_553f88;
        case 0x553f8cu: goto label_553f8c;
        case 0x553f90u: goto label_553f90;
        case 0x553f94u: goto label_553f94;
        case 0x553f98u: goto label_553f98;
        case 0x553f9cu: goto label_553f9c;
        case 0x553fa0u: goto label_553fa0;
        case 0x553fa4u: goto label_553fa4;
        case 0x553fa8u: goto label_553fa8;
        case 0x553facu: goto label_553fac;
        case 0x553fb0u: goto label_553fb0;
        case 0x553fb4u: goto label_553fb4;
        case 0x553fb8u: goto label_553fb8;
        case 0x553fbcu: goto label_553fbc;
        case 0x553fc0u: goto label_553fc0;
        case 0x553fc4u: goto label_553fc4;
        case 0x553fc8u: goto label_553fc8;
        case 0x553fccu: goto label_553fcc;
        case 0x553fd0u: goto label_553fd0;
        case 0x553fd4u: goto label_553fd4;
        case 0x553fd8u: goto label_553fd8;
        case 0x553fdcu: goto label_553fdc;
        case 0x553fe0u: goto label_553fe0;
        case 0x553fe4u: goto label_553fe4;
        case 0x553fe8u: goto label_553fe8;
        case 0x553fecu: goto label_553fec;
        case 0x553ff0u: goto label_553ff0;
        case 0x553ff4u: goto label_553ff4;
        case 0x553ff8u: goto label_553ff8;
        case 0x553ffcu: goto label_553ffc;
        case 0x554000u: goto label_554000;
        case 0x554004u: goto label_554004;
        case 0x554008u: goto label_554008;
        case 0x55400cu: goto label_55400c;
        case 0x554010u: goto label_554010;
        case 0x554014u: goto label_554014;
        case 0x554018u: goto label_554018;
        case 0x55401cu: goto label_55401c;
        case 0x554020u: goto label_554020;
        case 0x554024u: goto label_554024;
        case 0x554028u: goto label_554028;
        case 0x55402cu: goto label_55402c;
        case 0x554030u: goto label_554030;
        case 0x554034u: goto label_554034;
        case 0x554038u: goto label_554038;
        case 0x55403cu: goto label_55403c;
        case 0x554040u: goto label_554040;
        case 0x554044u: goto label_554044;
        case 0x554048u: goto label_554048;
        case 0x55404cu: goto label_55404c;
        case 0x554050u: goto label_554050;
        case 0x554054u: goto label_554054;
        case 0x554058u: goto label_554058;
        case 0x55405cu: goto label_55405c;
        case 0x554060u: goto label_554060;
        case 0x554064u: goto label_554064;
        case 0x554068u: goto label_554068;
        case 0x55406cu: goto label_55406c;
        case 0x554070u: goto label_554070;
        case 0x554074u: goto label_554074;
        case 0x554078u: goto label_554078;
        case 0x55407cu: goto label_55407c;
        case 0x554080u: goto label_554080;
        case 0x554084u: goto label_554084;
        case 0x554088u: goto label_554088;
        case 0x55408cu: goto label_55408c;
        case 0x554090u: goto label_554090;
        case 0x554094u: goto label_554094;
        case 0x554098u: goto label_554098;
        case 0x55409cu: goto label_55409c;
        case 0x5540a0u: goto label_5540a0;
        case 0x5540a4u: goto label_5540a4;
        case 0x5540a8u: goto label_5540a8;
        case 0x5540acu: goto label_5540ac;
        case 0x5540b0u: goto label_5540b0;
        case 0x5540b4u: goto label_5540b4;
        case 0x5540b8u: goto label_5540b8;
        case 0x5540bcu: goto label_5540bc;
        case 0x5540c0u: goto label_5540c0;
        case 0x5540c4u: goto label_5540c4;
        case 0x5540c8u: goto label_5540c8;
        case 0x5540ccu: goto label_5540cc;
        case 0x5540d0u: goto label_5540d0;
        case 0x5540d4u: goto label_5540d4;
        case 0x5540d8u: goto label_5540d8;
        case 0x5540dcu: goto label_5540dc;
        case 0x5540e0u: goto label_5540e0;
        case 0x5540e4u: goto label_5540e4;
        case 0x5540e8u: goto label_5540e8;
        case 0x5540ecu: goto label_5540ec;
        case 0x5540f0u: goto label_5540f0;
        case 0x5540f4u: goto label_5540f4;
        case 0x5540f8u: goto label_5540f8;
        case 0x5540fcu: goto label_5540fc;
        case 0x554100u: goto label_554100;
        case 0x554104u: goto label_554104;
        case 0x554108u: goto label_554108;
        case 0x55410cu: goto label_55410c;
        case 0x554110u: goto label_554110;
        case 0x554114u: goto label_554114;
        case 0x554118u: goto label_554118;
        case 0x55411cu: goto label_55411c;
        case 0x554120u: goto label_554120;
        case 0x554124u: goto label_554124;
        case 0x554128u: goto label_554128;
        case 0x55412cu: goto label_55412c;
        case 0x554130u: goto label_554130;
        case 0x554134u: goto label_554134;
        case 0x554138u: goto label_554138;
        case 0x55413cu: goto label_55413c;
        case 0x554140u: goto label_554140;
        case 0x554144u: goto label_554144;
        case 0x554148u: goto label_554148;
        case 0x55414cu: goto label_55414c;
        case 0x554150u: goto label_554150;
        case 0x554154u: goto label_554154;
        case 0x554158u: goto label_554158;
        case 0x55415cu: goto label_55415c;
        case 0x554160u: goto label_554160;
        case 0x554164u: goto label_554164;
        case 0x554168u: goto label_554168;
        case 0x55416cu: goto label_55416c;
        case 0x554170u: goto label_554170;
        case 0x554174u: goto label_554174;
        case 0x554178u: goto label_554178;
        case 0x55417cu: goto label_55417c;
        case 0x554180u: goto label_554180;
        case 0x554184u: goto label_554184;
        case 0x554188u: goto label_554188;
        case 0x55418cu: goto label_55418c;
        case 0x554190u: goto label_554190;
        case 0x554194u: goto label_554194;
        case 0x554198u: goto label_554198;
        case 0x55419cu: goto label_55419c;
        case 0x5541a0u: goto label_5541a0;
        case 0x5541a4u: goto label_5541a4;
        case 0x5541a8u: goto label_5541a8;
        case 0x5541acu: goto label_5541ac;
        case 0x5541b0u: goto label_5541b0;
        case 0x5541b4u: goto label_5541b4;
        case 0x5541b8u: goto label_5541b8;
        case 0x5541bcu: goto label_5541bc;
        case 0x5541c0u: goto label_5541c0;
        case 0x5541c4u: goto label_5541c4;
        case 0x5541c8u: goto label_5541c8;
        case 0x5541ccu: goto label_5541cc;
        case 0x5541d0u: goto label_5541d0;
        case 0x5541d4u: goto label_5541d4;
        case 0x5541d8u: goto label_5541d8;
        case 0x5541dcu: goto label_5541dc;
        case 0x5541e0u: goto label_5541e0;
        case 0x5541e4u: goto label_5541e4;
        case 0x5541e8u: goto label_5541e8;
        case 0x5541ecu: goto label_5541ec;
        case 0x5541f0u: goto label_5541f0;
        case 0x5541f4u: goto label_5541f4;
        case 0x5541f8u: goto label_5541f8;
        case 0x5541fcu: goto label_5541fc;
        case 0x554200u: goto label_554200;
        case 0x554204u: goto label_554204;
        case 0x554208u: goto label_554208;
        case 0x55420cu: goto label_55420c;
        case 0x554210u: goto label_554210;
        case 0x554214u: goto label_554214;
        case 0x554218u: goto label_554218;
        case 0x55421cu: goto label_55421c;
        case 0x554220u: goto label_554220;
        case 0x554224u: goto label_554224;
        case 0x554228u: goto label_554228;
        case 0x55422cu: goto label_55422c;
        case 0x554230u: goto label_554230;
        case 0x554234u: goto label_554234;
        case 0x554238u: goto label_554238;
        case 0x55423cu: goto label_55423c;
        case 0x554240u: goto label_554240;
        case 0x554244u: goto label_554244;
        case 0x554248u: goto label_554248;
        case 0x55424cu: goto label_55424c;
        default: break;
    }

    ctx->pc = 0x553eb0u;

label_553eb0:
    // 0x553eb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x553eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_553eb4:
    // 0x553eb4: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x553eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_553eb8:
    // 0x553eb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x553eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_553ebc:
    // 0x553ebc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_553ec0:
    // 0x553ec0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x553ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_553ec4:
    // 0x553ec4: 0x24c6d960  addiu       $a2, $a2, -0x26A0
    ctx->pc = 0x553ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957408));
label_553ec8:
    // 0x553ec8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x553ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_553ecc:
    // 0x553ecc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x553eccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_553ed0:
    // 0x553ed0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x553ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_553ed4:
    // 0x553ed4: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x553ed4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_553ed8:
    // 0x553ed8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x553ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_553edc:
    // 0x553edc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x553edcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_553ee0:
    // 0x553ee0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x553ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_553ee4:
    // 0x553ee4: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x553ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_553ee8:
    // 0x553ee8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x553ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_553eec:
    // 0x553eec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x553eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_553ef0:
    // 0x553ef0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x553ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_553ef4:
    // 0x553ef4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x553ef4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_553ef8:
    // 0x553ef8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x553ef8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_553efc:
    // 0x553efc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x553efcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_553f00:
    // 0x553f00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x553f00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_553f04:
    // 0x553f04: 0x9453dc08  lhu         $s3, -0x23F8($v0)
    ctx->pc = 0x553f04u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958088)));
label_553f08:
    // 0x553f08: 0x90830082  lbu         $v1, 0x82($a0)
    ctx->pc = 0x553f08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 130)));
label_553f0c:
    // 0x553f0c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_553f10:
    // 0x553f10: 0x9452dc0a  lhu         $s2, -0x23F6($v0)
    ctx->pc = 0x553f10u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958090)));
label_553f14:
    // 0x553f14: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x553f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
label_553f18:
    // 0x553f18: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_553f1c:
    // 0x553f1c: 0x9451dc10  lhu         $s1, -0x23F0($v0)
    ctx->pc = 0x553f1cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958096)));
label_553f20:
    // 0x553f20: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x553f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_553f24:
    // 0x553f24: 0x9450dc12  lhu         $s0, -0x23EE($v0)
    ctx->pc = 0x553f24u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294958098)));
label_553f28:
    // 0x553f28: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_553f2c:
    if (ctx->pc == 0x553F2Cu) {
        ctx->pc = 0x553F2Cu;
            // 0x553f2c: 0x2694e080  addiu       $s4, $s4, -0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959232));
        ctx->pc = 0x553F30u;
        goto label_553f30;
    }
    ctx->pc = 0x553F28u;
    {
        const bool branch_taken_0x553f28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x553F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553F28u;
            // 0x553f2c: 0x2694e080  addiu       $s4, $s4, -0x1F80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553f28) {
            ctx->pc = 0x553F3Cu;
            goto label_553f3c;
        }
    }
    ctx->pc = 0x553F30u;
label_553f30:
    // 0x553f30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x553f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_553f34:
    // 0x553f34: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x553f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_553f38:
    // 0x553f38: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x553f38u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553f3c:
    // 0x553f3c: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x553f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_553f40:
    // 0x553f40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x553f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_553f44:
    // 0x553f44: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x553f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_553f48:
    // 0x553f48: 0x8ee20054  lw          $v0, 0x54($s7)
    ctx->pc = 0x553f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_553f4c:
    // 0x553f4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x553f4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553f50:
    // 0x553f50: 0x0  nop
    ctx->pc = 0x553f50u;
    // NOP
label_553f54:
    // 0x553f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553f58:
    // 0x553f58: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x553f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_553f5c:
    // 0x553f5c: 0x46006540  add.s       $f21, $f12, $f0
    ctx->pc = 0x553f5cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_553f60:
    // 0x553f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553f64:
    // 0x553f64: 0x0  nop
    ctx->pc = 0x553f64u;
    // NOP
label_553f68:
    // 0x553f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x553f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_553f6c:
    // 0x553f6c: 0xc0506ac  jal         func_141AB0
label_553f70:
    if (ctx->pc == 0x553F70u) {
        ctx->pc = 0x553F70u;
            // 0x553f70: 0x46006d00  add.s       $f20, $f13, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->pc = 0x553F74u;
        goto label_553f74;
    }
    ctx->pc = 0x553F6Cu;
    SET_GPR_U32(ctx, 31, 0x553F74u);
    ctx->pc = 0x553F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x553F6Cu;
            // 0x553f70: 0x46006d00  add.s       $f20, $f13, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553F74u; }
        if (ctx->pc != 0x553F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x553F74u; }
        if (ctx->pc != 0x553F74u) { return; }
    }
    ctx->pc = 0x553F74u;
label_553f74:
    // 0x553f74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x553f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_553f78:
    // 0x553f78: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x553f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_553f7c:
    // 0x553f7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x553f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_553f80:
    // 0x553f80: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x553f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_553f84:
    // 0x553f84: 0x320f809  jalr        $t9
label_553f88:
    if (ctx->pc == 0x553F88u) {
        ctx->pc = 0x553F88u;
            // 0x553f88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x553F8Cu;
        goto label_553f8c;
    }
    ctx->pc = 0x553F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x553F8Cu);
        ctx->pc = 0x553F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553F84u;
            // 0x553f88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x553F8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x553F8Cu; }
            if (ctx->pc != 0x553F8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x553F8Cu;
label_553f8c:
    // 0x553f8c: 0xc6970048  lwc1        $f23, 0x48($s4)
    ctx->pc = 0x553f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_553f90:
    // 0x553f90: 0xc696004c  lwc1        $f22, 0x4C($s4)
    ctx->pc = 0x553f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_553f94:
    // 0x553f94: 0x6600004  bltz        $s3, . + 4 + (0x4 << 2)
label_553f98:
    if (ctx->pc == 0x553F98u) {
        ctx->pc = 0x553F98u;
            // 0x553f98: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->pc = 0x553F9Cu;
        goto label_553f9c;
    }
    ctx->pc = 0x553F94u;
    {
        const bool branch_taken_0x553f94 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x553F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553F94u;
            // 0x553f98: 0x26850040  addiu       $a1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x553f94) {
            ctx->pc = 0x553FA8u;
            goto label_553fa8;
        }
    }
    ctx->pc = 0x553F9Cu;
label_553f9c:
    // 0x553f9c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x553f9cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553fa0:
    // 0x553fa0: 0x10000008  b           . + 4 + (0x8 << 2)
label_553fa4:
    if (ctx->pc == 0x553FA4u) {
        ctx->pc = 0x553FA4u;
            // 0x553fa4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553FA8u;
        goto label_553fa8;
    }
    ctx->pc = 0x553FA0u;
    {
        const bool branch_taken_0x553fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553FA0u;
            // 0x553fa4: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553fa0) {
            ctx->pc = 0x553FC4u;
            goto label_553fc4;
        }
    }
    ctx->pc = 0x553FA8u;
label_553fa8:
    // 0x553fa8: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x553fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_553fac:
    // 0x553fac: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x553facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_553fb0:
    // 0x553fb0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553fb4:
    // 0x553fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553fb8:
    // 0x553fb8: 0x0  nop
    ctx->pc = 0x553fb8u;
    // NOP
label_553fbc:
    // 0x553fbc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x553fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_553fc0:
    // 0x553fc0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x553fc0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_553fc4:
    // 0x553fc4: 0x6420004  bltzl       $s2, . + 4 + (0x4 << 2)
label_553fc8:
    if (ctx->pc == 0x553FC8u) {
        ctx->pc = 0x553FC8u;
            // 0x553fc8: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x553FCCu;
        goto label_553fcc;
    }
    ctx->pc = 0x553FC4u;
    {
        const bool branch_taken_0x553fc4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x553fc4) {
            ctx->pc = 0x553FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x553FC4u;
            // 0x553fc8: 0x121842  srl         $v1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x553FD8u;
            goto label_553fd8;
        }
    }
    ctx->pc = 0x553FCCu;
label_553fcc:
    // 0x553fcc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x553fccu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553fd0:
    // 0x553fd0: 0x10000007  b           . + 4 + (0x7 << 2)
label_553fd4:
    if (ctx->pc == 0x553FD4u) {
        ctx->pc = 0x553FD4u;
            // 0x553fd4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x553FD8u;
        goto label_553fd8;
    }
    ctx->pc = 0x553FD0u;
    {
        const bool branch_taken_0x553fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x553FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x553FD0u;
            // 0x553fd4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x553fd0) {
            ctx->pc = 0x553FF0u;
            goto label_553ff0;
        }
    }
    ctx->pc = 0x553FD8u;
label_553fd8:
    // 0x553fd8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x553fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_553fdc:
    // 0x553fdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x553fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_553fe0:
    // 0x553fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x553fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_553fe4:
    // 0x553fe4: 0x0  nop
    ctx->pc = 0x553fe4u;
    // NOP
label_553fe8:
    // 0x553fe8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x553fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_553fec:
    // 0x553fec: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x553fecu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_553ff0:
    // 0x553ff0: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x553ff0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_553ff4:
    // 0x553ff4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x553ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_553ff8:
    // 0x553ff8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x553ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_553ffc:
    // 0x553ffc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x553ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_554000:
    // 0x554000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x554000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_554004:
    // 0x554004: 0x4616a3c0  add.s       $f15, $f20, $f22
    ctx->pc = 0x554004u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_554008:
    // 0x554008: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x554008u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_55400c:
    // 0x55400c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x55400cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_554010:
    // 0x554010: 0xc0bc284  jal         func_2F0A10
label_554014:
    if (ctx->pc == 0x554014u) {
        ctx->pc = 0x554014u;
            // 0x554014: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x554018u;
        goto label_554018;
    }
    ctx->pc = 0x554010u;
    SET_GPR_U32(ctx, 31, 0x554018u);
    ctx->pc = 0x554014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554010u;
            // 0x554014: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554018u; }
        if (ctx->pc != 0x554018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554018u; }
        if (ctx->pc != 0x554018u) { return; }
    }
    ctx->pc = 0x554018u;
label_554018:
    // 0x554018: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55401c:
    // 0x55401c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x55401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554020:
    // 0x554020: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_554024:
    // 0x554024: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x554024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_554028:
    // 0x554028: 0x320f809  jalr        $t9
label_55402c:
    if (ctx->pc == 0x55402Cu) {
        ctx->pc = 0x554030u;
        goto label_554030;
    }
    ctx->pc = 0x554028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554030u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x554030u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554030u; }
            if (ctx->pc != 0x554030u) { return; }
        }
        }
    }
    ctx->pc = 0x554030u;
label_554030:
    // 0x554030: 0x8ee20054  lw          $v0, 0x54($s7)
    ctx->pc = 0x554030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 84)));
label_554034:
    // 0x554034: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x554034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_554038:
    // 0x554038: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x554038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55403c:
    // 0x55403c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x55403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_554040:
    // 0x554040: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x554040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_554044:
    // 0x554044: 0x0  nop
    ctx->pc = 0x554044u;
    // NOP
label_554048:
    // 0x554048: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x554048u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_55404c:
    // 0x55404c: 0x8c440134  lw          $a0, 0x134($v0)
    ctx->pc = 0x55404cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_554050:
    // 0x554050: 0x46170d5c  madd.s      $f21, $f1, $f23
    ctx->pc = 0x554050u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[23]));
label_554054:
    // 0x554054: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x554054u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_554058:
    // 0x554058: 0xc0506ac  jal         func_141AB0
label_55405c:
    if (ctx->pc == 0x55405Cu) {
        ctx->pc = 0x55405Cu;
            // 0x55405c: 0x46160d1c  madd.s      $f20, $f1, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
        ctx->pc = 0x554060u;
        goto label_554060;
    }
    ctx->pc = 0x554058u;
    SET_GPR_U32(ctx, 31, 0x554060u);
    ctx->pc = 0x55405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x554058u;
            // 0x55405c: 0x46160d1c  madd.s      $f20, $f1, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554060u; }
        if (ctx->pc != 0x554060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x554060u; }
        if (ctx->pc != 0x554060u) { return; }
    }
    ctx->pc = 0x554060u;
label_554060:
    // 0x554060: 0x2aa20010  slti        $v0, $s5, 0x10
    ctx->pc = 0x554060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)16) ? 1 : 0);
label_554064:
    // 0x554064: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_554068:
    if (ctx->pc == 0x554068u) {
        ctx->pc = 0x554068u;
            // 0x554068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55406Cu;
        goto label_55406c;
    }
    ctx->pc = 0x554064u;
    {
        const bool branch_taken_0x554064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x554068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554064u;
            // 0x554068: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x554064) {
            ctx->pc = 0x554070u;
            goto label_554070;
        }
    }
    ctx->pc = 0x55406Cu;
label_55406c:
    // 0x55406c: 0x26a4ffff  addiu       $a0, $s5, -0x1
    ctx->pc = 0x55406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_554070:
    // 0x554070: 0x2aa20011  slti        $v0, $s5, 0x11
    ctx->pc = 0x554070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
label_554074:
    // 0x554074: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_554078:
    if (ctx->pc == 0x554078u) {
        ctx->pc = 0x554078u;
            // 0x554078: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->pc = 0x55407Cu;
        goto label_55407c;
    }
    ctx->pc = 0x554074u;
    {
        const bool branch_taken_0x554074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x554074) {
            ctx->pc = 0x554078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554074u;
            // 0x554078: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554084u;
            goto label_554084;
        }
    }
    ctx->pc = 0x55407Cu;
label_55407c:
    // 0x55407c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x55407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_554080:
    // 0x554080: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x554080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_554084:
    // 0x554084: 0x52a2002a  beql        $s5, $v0, . + 4 + (0x2A << 2)
label_554088:
    if (ctx->pc == 0x554088u) {
        ctx->pc = 0x554088u;
            // 0x554088: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->pc = 0x55408Cu;
        goto label_55408c;
    }
    ctx->pc = 0x554084u;
    {
        const bool branch_taken_0x554084 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x554084) {
            ctx->pc = 0x554088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554084u;
            // 0x554088: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x554130u;
            goto label_554130;
        }
    }
    ctx->pc = 0x55408Cu;
label_55408c:
    // 0x55408c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x55408cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_554090:
    // 0x554090: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x554090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_554094:
    // 0x554094: 0x440019  multu       $v0, $a0
    ctx->pc = 0x554094u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_554098:
    // 0x554098: 0x1010  mfhi        $v0
    ctx->pc = 0x554098u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_55409c:
    // 0x55409c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x55409cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_5540a0:
    // 0x5540a0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_5540a4:
    if (ctx->pc == 0x5540A4u) {
        ctx->pc = 0x5540A4u;
            // 0x5540a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x5540A8u;
        goto label_5540a8;
    }
    ctx->pc = 0x5540A0u;
    {
        const bool branch_taken_0x5540a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x5540a0) {
            ctx->pc = 0x5540A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5540A0u;
            // 0x5540a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5540B4u;
            goto label_5540b4;
        }
    }
    ctx->pc = 0x5540A8u;
label_5540a8:
    // 0x5540a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5540a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5540ac:
    // 0x5540ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_5540b0:
    if (ctx->pc == 0x5540B0u) {
        ctx->pc = 0x5540B0u;
            // 0x5540b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5540B4u;
        goto label_5540b4;
    }
    ctx->pc = 0x5540ACu;
    {
        const bool branch_taken_0x5540ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5540B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5540ACu;
            // 0x5540b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5540ac) {
            ctx->pc = 0x5540CCu;
            goto label_5540cc;
        }
    }
    ctx->pc = 0x5540B4u;
label_5540b4:
    // 0x5540b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x5540b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_5540b8:
    // 0x5540b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5540b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5540bc:
    // 0x5540bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5540bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5540c0:
    // 0x5540c0: 0x0  nop
    ctx->pc = 0x5540c0u;
    // NOP
label_5540c4:
    // 0x5540c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5540c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5540c8:
    // 0x5540c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x5540c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_5540cc:
    // 0x5540cc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x5540ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_5540d0:
    // 0x5540d0: 0x3c03430e  lui         $v1, 0x430E
    ctx->pc = 0x5540d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17166 << 16));
label_5540d4:
    // 0x5540d4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x5540d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_5540d8:
    // 0x5540d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5540d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5540dc:
    // 0x5540dc: 0x0  nop
    ctx->pc = 0x5540dcu;
    // NOP
label_5540e0:
    // 0x5540e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x5540e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_5540e4:
    // 0x5540e4: 0x1010  mfhi        $v0
    ctx->pc = 0x5540e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_5540e8:
    // 0x5540e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_5540ec:
    if (ctx->pc == 0x5540ECu) {
        ctx->pc = 0x5540ECu;
            // 0x5540ec: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->pc = 0x5540F0u;
        goto label_5540f0;
    }
    ctx->pc = 0x5540E8u;
    {
        const bool branch_taken_0x5540e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x5540ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5540E8u;
            // 0x5540ec: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5540e8) {
            ctx->pc = 0x5540FCu;
            goto label_5540fc;
        }
    }
    ctx->pc = 0x5540F0u;
label_5540f0:
    // 0x5540f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5540f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5540f4:
    // 0x5540f4: 0x10000008  b           . + 4 + (0x8 << 2)
label_5540f8:
    if (ctx->pc == 0x5540F8u) {
        ctx->pc = 0x5540F8u;
            // 0x5540f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5540FCu;
        goto label_5540fc;
    }
    ctx->pc = 0x5540F4u;
    {
        const bool branch_taken_0x5540f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5540F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5540F4u;
            // 0x5540f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5540f4) {
            ctx->pc = 0x554118u;
            goto label_554118;
        }
    }
    ctx->pc = 0x5540FCu;
label_5540fc:
    // 0x5540fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x5540fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_554100:
    // 0x554100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x554100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_554104:
    // 0x554104: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554108:
    // 0x554108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55410c:
    // 0x55410c: 0x0  nop
    ctx->pc = 0x55410cu;
    // NOP
label_554110:
    // 0x554110: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x554110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_554114:
    // 0x554114: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x554114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_554118:
    // 0x554118: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x554118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_55411c:
    // 0x55411c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x55411cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554120:
    // 0x554120: 0x0  nop
    ctx->pc = 0x554120u;
    // NOP
label_554124:
    // 0x554124: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x554124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_554128:
    // 0x554128: 0x10000003  b           . + 4 + (0x3 << 2)
label_55412c:
    if (ctx->pc == 0x55412Cu) {
        ctx->pc = 0x55412Cu;
            // 0x55412c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x554130u;
        goto label_554130;
    }
    ctx->pc = 0x554128u;
    {
        const bool branch_taken_0x554128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554128u;
            // 0x55412c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554128) {
            ctx->pc = 0x554138u;
            goto label_554138;
        }
    }
    ctx->pc = 0x554130u;
label_554130:
    // 0x554130: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x554130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_554134:
    // 0x554134: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x554134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_554138:
    // 0x554138: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x554138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_55413c:
    // 0x55413c: 0x3c03430e  lui         $v1, 0x430E
    ctx->pc = 0x55413cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17166 << 16));
label_554140:
    // 0x554140: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x554140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_554144:
    // 0x554144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x554144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_554148:
    // 0x554148: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x554148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55414c:
    // 0x55414c: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x55414cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_554150:
    // 0x554150: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x554150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554154:
    // 0x554154: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x554154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_554158:
    // 0x554158: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x554158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_55415c:
    // 0x55415c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x55415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_554160:
    // 0x554160: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554160u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554164:
    // 0x554164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_554168:
    // 0x554168: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x554168u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_55416c:
    // 0x55416c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x55416cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_554170:
    // 0x554170: 0x320f809  jalr        $t9
label_554174:
    if (ctx->pc == 0x554174u) {
        ctx->pc = 0x554174u;
            // 0x554174: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x554178u;
        goto label_554178;
    }
    ctx->pc = 0x554170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554178u);
        ctx->pc = 0x554174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554170u;
            // 0x554174: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x554178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554178u; }
            if (ctx->pc != 0x554178u) { return; }
        }
        }
    }
    ctx->pc = 0x554178u;
label_554178:
    // 0x554178: 0x6220004  bltzl       $s1, . + 4 + (0x4 << 2)
label_55417c:
    if (ctx->pc == 0x55417Cu) {
        ctx->pc = 0x55417Cu;
            // 0x55417c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x554180u;
        goto label_554180;
    }
    ctx->pc = 0x554178u;
    {
        const bool branch_taken_0x554178 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x554178) {
            ctx->pc = 0x55417Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x554178u;
            // 0x55417c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55418Cu;
            goto label_55418c;
        }
    }
    ctx->pc = 0x554180u;
label_554180:
    // 0x554180: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x554180u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554184:
    // 0x554184: 0x10000007  b           . + 4 + (0x7 << 2)
label_554188:
    if (ctx->pc == 0x554188u) {
        ctx->pc = 0x554188u;
            // 0x554188: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x55418Cu;
        goto label_55418c;
    }
    ctx->pc = 0x554184u;
    {
        const bool branch_taken_0x554184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x554188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554184u;
            // 0x554188: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x554184) {
            ctx->pc = 0x5541A4u;
            goto label_5541a4;
        }
    }
    ctx->pc = 0x55418Cu;
label_55418c:
    // 0x55418c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x55418cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_554190:
    // 0x554190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x554190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_554194:
    // 0x554194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x554194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_554198:
    // 0x554198: 0x0  nop
    ctx->pc = 0x554198u;
    // NOP
label_55419c:
    // 0x55419c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x55419cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5541a0:
    // 0x5541a0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x5541a0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_5541a4:
    // 0x5541a4: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_5541a8:
    if (ctx->pc == 0x5541A8u) {
        ctx->pc = 0x5541A8u;
            // 0x5541a8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x5541ACu;
        goto label_5541ac;
    }
    ctx->pc = 0x5541A4u;
    {
        const bool branch_taken_0x5541a4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x5541a4) {
            ctx->pc = 0x5541A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5541A4u;
            // 0x5541a8: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5541B8u;
            goto label_5541b8;
        }
    }
    ctx->pc = 0x5541ACu;
label_5541ac:
    // 0x5541ac: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x5541acu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5541b0:
    // 0x5541b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_5541b4:
    if (ctx->pc == 0x5541B4u) {
        ctx->pc = 0x5541B4u;
            // 0x5541b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x5541B8u;
        goto label_5541b8;
    }
    ctx->pc = 0x5541B0u;
    {
        const bool branch_taken_0x5541b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5541B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5541B0u;
            // 0x5541b4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5541b0) {
            ctx->pc = 0x5541D0u;
            goto label_5541d0;
        }
    }
    ctx->pc = 0x5541B8u;
label_5541b8:
    // 0x5541b8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x5541b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_5541bc:
    // 0x5541bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5541bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5541c0:
    // 0x5541c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5541c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5541c4:
    // 0x5541c4: 0x0  nop
    ctx->pc = 0x5541c4u;
    // NOP
label_5541c8:
    // 0x5541c8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5541c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5541cc:
    // 0x5541cc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x5541ccu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_5541d0:
    // 0x5541d0: 0x4617ab01  sub.s       $f12, $f21, $f23
    ctx->pc = 0x5541d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
label_5541d4:
    // 0x5541d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5541d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5541d8:
    // 0x5541d8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x5541d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_5541dc:
    // 0x5541dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5541dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5541e0:
    // 0x5541e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x5541e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_5541e4:
    // 0x5541e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5541e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5541e8:
    // 0x5541e8: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x5541e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_5541ec:
    // 0x5541ec: 0x4616a341  sub.s       $f13, $f20, $f22
    ctx->pc = 0x5541ecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_5541f0:
    // 0x5541f0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x5541f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_5541f4:
    // 0x5541f4: 0xc0bc284  jal         func_2F0A10
label_5541f8:
    if (ctx->pc == 0x5541F8u) {
        ctx->pc = 0x5541F8u;
            // 0x5541f8: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->pc = 0x5541FCu;
        goto label_5541fc;
    }
    ctx->pc = 0x5541F4u;
    SET_GPR_U32(ctx, 31, 0x5541FCu);
    ctx->pc = 0x5541F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5541F4u;
            // 0x5541f8: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5541FCu; }
        if (ctx->pc != 0x5541FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5541FCu; }
        if (ctx->pc != 0x5541FCu) { return; }
    }
    ctx->pc = 0x5541FCu;
label_5541fc:
    // 0x5541fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5541fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_554200:
    // 0x554200: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x554200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_554204:
    // 0x554204: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x554204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_554208:
    // 0x554208: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x554208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55420c:
    // 0x55420c: 0x320f809  jalr        $t9
label_554210:
    if (ctx->pc == 0x554210u) {
        ctx->pc = 0x554214u;
        goto label_554214;
    }
    ctx->pc = 0x55420Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x554214u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x554214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x554214u; }
            if (ctx->pc != 0x554214u) { return; }
        }
        }
    }
    ctx->pc = 0x554214u;
label_554214:
    // 0x554214: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x554214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_554218:
    // 0x554218: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x554218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55421c:
    // 0x55421c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x55421cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_554220:
    // 0x554220: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x554220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_554224:
    // 0x554224: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x554224u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_554228:
    // 0x554228: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x554228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55422c:
    // 0x55422c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x55422cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_554230:
    // 0x554230: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x554230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_554234:
    // 0x554234: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x554234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_554238:
    // 0x554238: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x554238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55423c:
    // 0x55423c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x55423cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_554240:
    // 0x554240: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x554240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_554244:
    // 0x554244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x554244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_554248:
    // 0x554248: 0x3e00008  jr          $ra
label_55424c:
    if (ctx->pc == 0x55424Cu) {
        ctx->pc = 0x55424Cu;
            // 0x55424c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x554250u;
        goto label_fallthrough_0x554248;
    }
    ctx->pc = 0x554248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x554248u;
            // 0x55424c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x554248:
    ctx->pc = 0x554250u;
}
