#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00565EB0
// Address: 0x565eb0 - 0x5661a0
void sub_00565EB0_0x565eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00565EB0_0x565eb0");
#endif

    switch (ctx->pc) {
        case 0x565eb0u: goto label_565eb0;
        case 0x565eb4u: goto label_565eb4;
        case 0x565eb8u: goto label_565eb8;
        case 0x565ebcu: goto label_565ebc;
        case 0x565ec0u: goto label_565ec0;
        case 0x565ec4u: goto label_565ec4;
        case 0x565ec8u: goto label_565ec8;
        case 0x565eccu: goto label_565ecc;
        case 0x565ed0u: goto label_565ed0;
        case 0x565ed4u: goto label_565ed4;
        case 0x565ed8u: goto label_565ed8;
        case 0x565edcu: goto label_565edc;
        case 0x565ee0u: goto label_565ee0;
        case 0x565ee4u: goto label_565ee4;
        case 0x565ee8u: goto label_565ee8;
        case 0x565eecu: goto label_565eec;
        case 0x565ef0u: goto label_565ef0;
        case 0x565ef4u: goto label_565ef4;
        case 0x565ef8u: goto label_565ef8;
        case 0x565efcu: goto label_565efc;
        case 0x565f00u: goto label_565f00;
        case 0x565f04u: goto label_565f04;
        case 0x565f08u: goto label_565f08;
        case 0x565f0cu: goto label_565f0c;
        case 0x565f10u: goto label_565f10;
        case 0x565f14u: goto label_565f14;
        case 0x565f18u: goto label_565f18;
        case 0x565f1cu: goto label_565f1c;
        case 0x565f20u: goto label_565f20;
        case 0x565f24u: goto label_565f24;
        case 0x565f28u: goto label_565f28;
        case 0x565f2cu: goto label_565f2c;
        case 0x565f30u: goto label_565f30;
        case 0x565f34u: goto label_565f34;
        case 0x565f38u: goto label_565f38;
        case 0x565f3cu: goto label_565f3c;
        case 0x565f40u: goto label_565f40;
        case 0x565f44u: goto label_565f44;
        case 0x565f48u: goto label_565f48;
        case 0x565f4cu: goto label_565f4c;
        case 0x565f50u: goto label_565f50;
        case 0x565f54u: goto label_565f54;
        case 0x565f58u: goto label_565f58;
        case 0x565f5cu: goto label_565f5c;
        case 0x565f60u: goto label_565f60;
        case 0x565f64u: goto label_565f64;
        case 0x565f68u: goto label_565f68;
        case 0x565f6cu: goto label_565f6c;
        case 0x565f70u: goto label_565f70;
        case 0x565f74u: goto label_565f74;
        case 0x565f78u: goto label_565f78;
        case 0x565f7cu: goto label_565f7c;
        case 0x565f80u: goto label_565f80;
        case 0x565f84u: goto label_565f84;
        case 0x565f88u: goto label_565f88;
        case 0x565f8cu: goto label_565f8c;
        case 0x565f90u: goto label_565f90;
        case 0x565f94u: goto label_565f94;
        case 0x565f98u: goto label_565f98;
        case 0x565f9cu: goto label_565f9c;
        case 0x565fa0u: goto label_565fa0;
        case 0x565fa4u: goto label_565fa4;
        case 0x565fa8u: goto label_565fa8;
        case 0x565facu: goto label_565fac;
        case 0x565fb0u: goto label_565fb0;
        case 0x565fb4u: goto label_565fb4;
        case 0x565fb8u: goto label_565fb8;
        case 0x565fbcu: goto label_565fbc;
        case 0x565fc0u: goto label_565fc0;
        case 0x565fc4u: goto label_565fc4;
        case 0x565fc8u: goto label_565fc8;
        case 0x565fccu: goto label_565fcc;
        case 0x565fd0u: goto label_565fd0;
        case 0x565fd4u: goto label_565fd4;
        case 0x565fd8u: goto label_565fd8;
        case 0x565fdcu: goto label_565fdc;
        case 0x565fe0u: goto label_565fe0;
        case 0x565fe4u: goto label_565fe4;
        case 0x565fe8u: goto label_565fe8;
        case 0x565fecu: goto label_565fec;
        case 0x565ff0u: goto label_565ff0;
        case 0x565ff4u: goto label_565ff4;
        case 0x565ff8u: goto label_565ff8;
        case 0x565ffcu: goto label_565ffc;
        case 0x566000u: goto label_566000;
        case 0x566004u: goto label_566004;
        case 0x566008u: goto label_566008;
        case 0x56600cu: goto label_56600c;
        case 0x566010u: goto label_566010;
        case 0x566014u: goto label_566014;
        case 0x566018u: goto label_566018;
        case 0x56601cu: goto label_56601c;
        case 0x566020u: goto label_566020;
        case 0x566024u: goto label_566024;
        case 0x566028u: goto label_566028;
        case 0x56602cu: goto label_56602c;
        case 0x566030u: goto label_566030;
        case 0x566034u: goto label_566034;
        case 0x566038u: goto label_566038;
        case 0x56603cu: goto label_56603c;
        case 0x566040u: goto label_566040;
        case 0x566044u: goto label_566044;
        case 0x566048u: goto label_566048;
        case 0x56604cu: goto label_56604c;
        case 0x566050u: goto label_566050;
        case 0x566054u: goto label_566054;
        case 0x566058u: goto label_566058;
        case 0x56605cu: goto label_56605c;
        case 0x566060u: goto label_566060;
        case 0x566064u: goto label_566064;
        case 0x566068u: goto label_566068;
        case 0x56606cu: goto label_56606c;
        case 0x566070u: goto label_566070;
        case 0x566074u: goto label_566074;
        case 0x566078u: goto label_566078;
        case 0x56607cu: goto label_56607c;
        case 0x566080u: goto label_566080;
        case 0x566084u: goto label_566084;
        case 0x566088u: goto label_566088;
        case 0x56608cu: goto label_56608c;
        case 0x566090u: goto label_566090;
        case 0x566094u: goto label_566094;
        case 0x566098u: goto label_566098;
        case 0x56609cu: goto label_56609c;
        case 0x5660a0u: goto label_5660a0;
        case 0x5660a4u: goto label_5660a4;
        case 0x5660a8u: goto label_5660a8;
        case 0x5660acu: goto label_5660ac;
        case 0x5660b0u: goto label_5660b0;
        case 0x5660b4u: goto label_5660b4;
        case 0x5660b8u: goto label_5660b8;
        case 0x5660bcu: goto label_5660bc;
        case 0x5660c0u: goto label_5660c0;
        case 0x5660c4u: goto label_5660c4;
        case 0x5660c8u: goto label_5660c8;
        case 0x5660ccu: goto label_5660cc;
        case 0x5660d0u: goto label_5660d0;
        case 0x5660d4u: goto label_5660d4;
        case 0x5660d8u: goto label_5660d8;
        case 0x5660dcu: goto label_5660dc;
        case 0x5660e0u: goto label_5660e0;
        case 0x5660e4u: goto label_5660e4;
        case 0x5660e8u: goto label_5660e8;
        case 0x5660ecu: goto label_5660ec;
        case 0x5660f0u: goto label_5660f0;
        case 0x5660f4u: goto label_5660f4;
        case 0x5660f8u: goto label_5660f8;
        case 0x5660fcu: goto label_5660fc;
        case 0x566100u: goto label_566100;
        case 0x566104u: goto label_566104;
        case 0x566108u: goto label_566108;
        case 0x56610cu: goto label_56610c;
        case 0x566110u: goto label_566110;
        case 0x566114u: goto label_566114;
        case 0x566118u: goto label_566118;
        case 0x56611cu: goto label_56611c;
        case 0x566120u: goto label_566120;
        case 0x566124u: goto label_566124;
        case 0x566128u: goto label_566128;
        case 0x56612cu: goto label_56612c;
        case 0x566130u: goto label_566130;
        case 0x566134u: goto label_566134;
        case 0x566138u: goto label_566138;
        case 0x56613cu: goto label_56613c;
        case 0x566140u: goto label_566140;
        case 0x566144u: goto label_566144;
        case 0x566148u: goto label_566148;
        case 0x56614cu: goto label_56614c;
        case 0x566150u: goto label_566150;
        case 0x566154u: goto label_566154;
        case 0x566158u: goto label_566158;
        case 0x56615cu: goto label_56615c;
        case 0x566160u: goto label_566160;
        case 0x566164u: goto label_566164;
        case 0x566168u: goto label_566168;
        case 0x56616cu: goto label_56616c;
        case 0x566170u: goto label_566170;
        case 0x566174u: goto label_566174;
        case 0x566178u: goto label_566178;
        case 0x56617cu: goto label_56617c;
        case 0x566180u: goto label_566180;
        case 0x566184u: goto label_566184;
        case 0x566188u: goto label_566188;
        case 0x56618cu: goto label_56618c;
        case 0x566190u: goto label_566190;
        case 0x566194u: goto label_566194;
        case 0x566198u: goto label_566198;
        case 0x56619cu: goto label_56619c;
        default: break;
    }

    ctx->pc = 0x565eb0u;

label_565eb0:
    // 0x565eb0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x565eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_565eb4:
    // 0x565eb4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x565eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_565eb8:
    // 0x565eb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x565eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_565ebc:
    // 0x565ebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x565ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_565ec0:
    // 0x565ec0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x565ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_565ec4:
    // 0x565ec4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x565ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_565ec8:
    // 0x565ec8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x565ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_565ecc:
    // 0x565ecc: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x565eccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
label_565ed0:
    // 0x565ed0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x565ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_565ed4:
    // 0x565ed4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x565ed4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_565ed8:
    // 0x565ed8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x565ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_565edc:
    // 0x565edc: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x565edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_565ee0:
    // 0x565ee0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x565ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_565ee4:
    // 0x565ee4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x565ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_565ee8:
    // 0x565ee8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x565ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_565eec:
    // 0x565eec: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x565eecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
label_565ef0:
    // 0x565ef0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x565ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_565ef4:
    // 0x565ef4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x565ef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_565ef8:
    // 0x565ef8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x565ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_565efc:
    // 0x565efc: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x565efcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_565f00:
    // 0x565f00: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x565f00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_565f04:
    // 0x565f04: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x565f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
label_565f08:
    // 0x565f08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x565f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_565f0c:
    // 0x565f0c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x565f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_565f10:
    // 0x565f10: 0x84700020  lh          $s0, 0x20($v1)
    ctx->pc = 0x565f10u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_565f14:
    // 0x565f14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x565f14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_565f18:
    // 0x565f18: 0x847e0022  lh          $fp, 0x22($v1)
    ctx->pc = 0x565f18u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
label_565f1c:
    // 0x565f1c: 0x26f79bc0  addiu       $s7, $s7, -0x6440
    ctx->pc = 0x565f1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941632));
label_565f20:
    // 0x565f20: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x565f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_565f24:
    // 0x565f24: 0x26732104  addiu       $s3, $s3, 0x2104
    ctx->pc = 0x565f24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8452));
label_565f28:
    // 0x565f28: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x565f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_565f2c:
    // 0x565f2c: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x565f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
label_565f30:
    // 0x565f30: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x565f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_565f34:
    // 0x565f34: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x565f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_565f38:
    // 0x565f38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x565f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_565f3c:
    // 0x565f3c: 0x90420116  lbu         $v0, 0x116($v0)
    ctx->pc = 0x565f3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_565f40:
    // 0x565f40: 0x8c641d08  lw          $a0, 0x1D08($v1)
    ctx->pc = 0x565f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7432)));
label_565f44:
    // 0x565f44: 0xc0506ac  jal         func_141AB0
label_565f48:
    if (ctx->pc == 0x565F48u) {
        ctx->pc = 0x565F48u;
            // 0x565f48: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->pc = 0x565F4Cu;
        goto label_565f4c;
    }
    ctx->pc = 0x565F44u;
    SET_GPR_U32(ctx, 31, 0x565F4Cu);
    ctx->pc = 0x565F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565F44u;
            // 0x565f48: 0x469025  or          $s2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565F4Cu; }
        if (ctx->pc != 0x565F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565F4Cu; }
        if (ctx->pc != 0x565F4Cu) { return; }
    }
    ctx->pc = 0x565F4Cu;
label_565f4c:
    // 0x565f4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x565f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_565f50:
    // 0x565f50: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x565f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_565f54:
    // 0x565f54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x565f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_565f58:
    // 0x565f58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x565f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_565f5c:
    // 0x565f5c: 0x320f809  jalr        $t9
label_565f60:
    if (ctx->pc == 0x565F60u) {
        ctx->pc = 0x565F60u;
            // 0x565f60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x565F64u;
        goto label_565f64;
    }
    ctx->pc = 0x565F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x565F64u);
        ctx->pc = 0x565F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565F5Cu;
            // 0x565f60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x565F64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x565F64u; }
            if (ctx->pc != 0x565F64u) { return; }
        }
        }
    }
    ctx->pc = 0x565F64u;
label_565f64:
    // 0x565f64: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x565f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_565f68:
    // 0x565f68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x565f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_565f6c:
    // 0x565f6c: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x565f6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_565f70:
    // 0x565f70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x565f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_565f74:
    // 0x565f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x565f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_565f78:
    // 0x565f78: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x565f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_565f7c:
    // 0x565f7c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x565f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_565f80:
    // 0x565f80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x565f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_565f84:
    // 0x565f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x565f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565f88:
    // 0x565f88: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x565f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_565f8c:
    // 0x565f8c: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x565f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
label_565f90:
    // 0x565f90: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x565f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_565f94:
    // 0x565f94: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x565f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_565f98:
    // 0x565f98: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x565f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_565f9c:
    // 0x565f9c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x565f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_565fa0:
    // 0x565fa0: 0x3c24821  addu        $t1, $fp, $v0
    ctx->pc = 0x565fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_565fa4:
    // 0x565fa4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x565fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_565fa8:
    // 0x565fa8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x565fa8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565fac:
    // 0x565fac: 0x0  nop
    ctx->pc = 0x565facu;
    // NOP
label_565fb0:
    // 0x565fb0: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x565fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_565fb4:
    // 0x565fb4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x565fb4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565fb8:
    // 0x565fb8: 0x0  nop
    ctx->pc = 0x565fb8u;
    // NOP
label_565fbc:
    // 0x565fbc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x565fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_565fc0:
    // 0x565fc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x565fc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565fc4:
    // 0x565fc4: 0x0  nop
    ctx->pc = 0x565fc4u;
    // NOP
label_565fc8:
    // 0x565fc8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x565fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_565fcc:
    // 0x565fcc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x565fccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565fd0:
    // 0x565fd0: 0x0  nop
    ctx->pc = 0x565fd0u;
    // NOP
label_565fd4:
    // 0x565fd4: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x565fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_565fd8:
    // 0x565fd8: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x565fd8u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_565fdc:
    // 0x565fdc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x565fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_565fe0:
    // 0x565fe0: 0xc0bc284  jal         func_2F0A10
label_565fe4:
    if (ctx->pc == 0x565FE4u) {
        ctx->pc = 0x565FE4u;
            // 0x565fe4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x565FE8u;
        goto label_565fe8;
    }
    ctx->pc = 0x565FE0u;
    SET_GPR_U32(ctx, 31, 0x565FE8u);
    ctx->pc = 0x565FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565FE0u;
            // 0x565fe4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565FE8u; }
        if (ctx->pc != 0x565FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565FE8u; }
        if (ctx->pc != 0x565FE8u) { return; }
    }
    ctx->pc = 0x565FE8u;
label_565fe8:
    // 0x565fe8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x565fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_565fec:
    // 0x565fec: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x565fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_565ff0:
    // 0x565ff0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x565ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_565ff4:
    // 0x565ff4: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x565ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_565ff8:
    // 0x565ff8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x565ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_565ffc:
    // 0x565ffc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x565ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_566000:
    // 0x566000: 0x320f809  jalr        $t9
label_566004:
    if (ctx->pc == 0x566004u) {
        ctx->pc = 0x566008u;
        goto label_566008;
    }
    ctx->pc = 0x566000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566008u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x566008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566008u; }
            if (ctx->pc != 0x566008u) { return; }
        }
        }
    }
    ctx->pc = 0x566008u;
label_566008:
    // 0x566008: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x566008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_56600c:
    // 0x56600c: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x56600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_566010:
    // 0x566010: 0x8ed00018  lw          $s0, 0x18($s6)
    ctx->pc = 0x566010u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_566014:
    // 0x566014: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x566014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_566018:
    // 0x566018: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x566018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_56601c:
    // 0x56601c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x56601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_566020:
    // 0x566020: 0x6810015  bgez        $s4, . + 4 + (0x15 << 2)
label_566024:
    if (ctx->pc == 0x566024u) {
        ctx->pc = 0x566024u;
            // 0x566024: 0x3c3b021  addu        $s6, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->pc = 0x566028u;
        goto label_566028;
    }
    ctx->pc = 0x566020u;
    {
        const bool branch_taken_0x566020 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x566024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566020u;
            // 0x566024: 0x3c3b021  addu        $s6, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566020) {
            ctx->pc = 0x566078u;
            goto label_566078;
        }
    }
    ctx->pc = 0x566028u;
label_566028:
    // 0x566028: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x566028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_56602c:
    // 0x56602c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x56602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_566030:
    // 0x566030: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x566030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_566034:
    // 0x566034: 0x24c6fbb8  addiu       $a2, $a2, -0x448
    ctx->pc = 0x566034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966200));
label_566038:
    // 0x566038: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x566038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_56603c:
    // 0x56603c: 0xc043be4  jal         func_10EF90
label_566040:
    if (ctx->pc == 0x566040u) {
        ctx->pc = 0x566040u;
            // 0x566040: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x566044u;
        goto label_566044;
    }
    ctx->pc = 0x56603Cu;
    SET_GPR_U32(ctx, 31, 0x566044u);
    ctx->pc = 0x566040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56603Cu;
            // 0x566040: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566044u; }
        if (ctx->pc != 0x566044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566044u; }
        if (ctx->pc != 0x566044u) { return; }
    }
    ctx->pc = 0x566044u;
label_566044:
    // 0x566044: 0xc04b02e  jal         func_12C0B8
label_566048:
    if (ctx->pc == 0x566048u) {
        ctx->pc = 0x566048u;
            // 0x566048: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x56604Cu;
        goto label_56604c;
    }
    ctx->pc = 0x566044u;
    SET_GPR_U32(ctx, 31, 0x56604Cu);
    ctx->pc = 0x566048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566044u;
            // 0x566048: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56604Cu; }
        if (ctx->pc != 0x56604Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56604Cu; }
        if (ctx->pc != 0x56604Cu) { return; }
    }
    ctx->pc = 0x56604Cu;
label_56604c:
    // 0x56604c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x56604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_566050:
    // 0x566050: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
label_566054:
    if (ctx->pc == 0x566054u) {
        ctx->pc = 0x566058u;
        goto label_566058;
    }
    ctx->pc = 0x566050u;
    {
        const bool branch_taken_0x566050 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x566050) {
            ctx->pc = 0x566078u;
            goto label_566078;
        }
    }
    ctx->pc = 0x566058u;
label_566058:
    // 0x566058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x566058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56605c:
    // 0x56605c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x56605cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_566060:
    // 0x566060: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x566060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_566064:
    // 0x566064: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x566064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_566068:
    // 0x566068: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x566068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_56606c:
    // 0x56606c: 0x3a040  sll         $s4, $v1, 1
    ctx->pc = 0x56606cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_566070:
    // 0x566070: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_566074:
    if (ctx->pc == 0x566074u) {
        ctx->pc = 0x566078u;
        goto label_566078;
    }
    ctx->pc = 0x566070u;
    {
        const bool branch_taken_0x566070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x566070) {
            ctx->pc = 0x56605Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_56605c;
        }
    }
    ctx->pc = 0x566078u;
label_566078:
    // 0x566078: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x566078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56607c:
    // 0x56607c: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x56607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_566080:
    // 0x566080: 0xc0506ac  jal         func_141AB0
label_566084:
    if (ctx->pc == 0x566084u) {
        ctx->pc = 0x566084u;
            // 0x566084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566088u;
        goto label_566088;
    }
    ctx->pc = 0x566080u;
    SET_GPR_U32(ctx, 31, 0x566088u);
    ctx->pc = 0x566084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566080u;
            // 0x566084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566088u; }
        if (ctx->pc != 0x566088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566088u; }
        if (ctx->pc != 0x566088u) { return; }
    }
    ctx->pc = 0x566088u;
label_566088:
    // 0x566088: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_56608c:
    // 0x56608c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x56608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_566090:
    // 0x566090: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_566094:
    // 0x566094: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x566094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_566098:
    // 0x566098: 0x320f809  jalr        $t9
label_56609c:
    if (ctx->pc == 0x56609Cu) {
        ctx->pc = 0x56609Cu;
            // 0x56609c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5660A0u;
        goto label_5660a0;
    }
    ctx->pc = 0x566098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5660A0u);
        ctx->pc = 0x56609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566098u;
            // 0x56609c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5660A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5660A0u; }
            if (ctx->pc != 0x5660A0u) { return; }
        }
        }
    }
    ctx->pc = 0x5660A0u;
label_5660a0:
    // 0x5660a0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x5660a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_5660a4:
    // 0x5660a4: 0x2c2f021  addu        $fp, $s6, $v0
    ctx->pc = 0x5660a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_5660a8:
    // 0x5660a8: 0x2704021  addu        $t0, $s3, $s0
    ctx->pc = 0x5660a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_5660ac:
    // 0x5660ac: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x5660acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_5660b0:
    // 0x5660b0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x5660b0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5660b4:
    // 0x5660b4: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x5660b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_5660b8:
    // 0x5660b8: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x5660b8u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_5660bc:
    // 0x5660bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5660bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5660c0:
    // 0x5660c0: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x5660c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_5660c4:
    // 0x5660c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5660c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5660c8:
    // 0x5660c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5660c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5660cc:
    // 0x5660cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5660ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5660d0:
    // 0x5660d0: 0x0  nop
    ctx->pc = 0x5660d0u;
    // NOP
label_5660d4:
    // 0x5660d4: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x5660d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_5660d8:
    // 0x5660d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5660d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5660dc:
    // 0x5660dc: 0x0  nop
    ctx->pc = 0x5660dcu;
    // NOP
label_5660e0:
    // 0x5660e0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x5660e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_5660e4:
    // 0x5660e4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x5660e4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5660e8:
    // 0x5660e8: 0x0  nop
    ctx->pc = 0x5660e8u;
    // NOP
label_5660ec:
    // 0x5660ec: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x5660ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_5660f0:
    // 0x5660f0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x5660f0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5660f4:
    // 0x5660f4: 0x0  nop
    ctx->pc = 0x5660f4u;
    // NOP
label_5660f8:
    // 0x5660f8: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x5660f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_5660fc:
    // 0x5660fc: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x5660fcu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_566100:
    // 0x566100: 0x0  nop
    ctx->pc = 0x566100u;
    // NOP
label_566104:
    // 0x566104: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x566104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_566108:
    // 0x566108: 0x2812  mflo        $a1
    ctx->pc = 0x566108u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_56610c:
    // 0x56610c: 0x24a5001d  addiu       $a1, $a1, 0x1D
    ctx->pc = 0x56610cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29));
label_566110:
    // 0x566110: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x566110u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_566114:
    // 0x566114: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x566114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_566118:
    // 0x566118: 0xc0bc284  jal         func_2F0A10
label_56611c:
    if (ctx->pc == 0x56611Cu) {
        ctx->pc = 0x56611Cu;
            // 0x56611c: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x566120u;
        goto label_566120;
    }
    ctx->pc = 0x566118u;
    SET_GPR_U32(ctx, 31, 0x566120u);
    ctx->pc = 0x56611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566118u;
            // 0x56611c: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566120u; }
        if (ctx->pc != 0x566120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566120u; }
        if (ctx->pc != 0x566120u) { return; }
    }
    ctx->pc = 0x566120u;
label_566120:
    // 0x566120: 0x2b4001b  divu        $zero, $s5, $s4
    ctx->pc = 0x566120u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
label_566124:
    // 0x566124: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x566124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_566128:
    // 0x566128: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x566128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_56612c:
    // 0x56612c: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x56612cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_566130:
    // 0x566130: 0xa810  mfhi        $s5
    ctx->pc = 0x566130u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_566134:
    // 0x566134: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x566134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_566138:
    // 0x566138: 0x1010  mfhi        $v0
    ctx->pc = 0x566138u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_56613c:
    // 0x56613c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x56613cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_566140:
    // 0x566140: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x566140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_566144:
    // 0x566144: 0x1680ffd8  bnez        $s4, . + 4 + (-0x28 << 2)
label_566148:
    if (ctx->pc == 0x566148u) {
        ctx->pc = 0x566148u;
            // 0x566148: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x56614Cu;
        goto label_56614c;
    }
    ctx->pc = 0x566144u;
    {
        const bool branch_taken_0x566144 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x566148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566144u;
            // 0x566148: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566144) {
            ctx->pc = 0x5660A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5660a8;
        }
    }
    ctx->pc = 0x56614Cu;
label_56614c:
    // 0x56614c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56614cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566150:
    // 0x566150: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x566150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_566154:
    // 0x566154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_566158:
    // 0x566158: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x566158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_56615c:
    // 0x56615c: 0x320f809  jalr        $t9
label_566160:
    if (ctx->pc == 0x566160u) {
        ctx->pc = 0x566164u;
        goto label_566164;
    }
    ctx->pc = 0x56615Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566164u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x566164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566164u; }
            if (ctx->pc != 0x566164u) { return; }
        }
        }
    }
    ctx->pc = 0x566164u;
label_566164:
    // 0x566164: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x566164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_566168:
    // 0x566168: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x566168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_56616c:
    // 0x56616c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x56616cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_566170:
    // 0x566170: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x566170u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_566174:
    // 0x566174: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x566174u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_566178:
    // 0x566178: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x566178u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_56617c:
    // 0x56617c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x56617cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_566180:
    // 0x566180: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x566180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_566184:
    // 0x566184: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x566184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_566188:
    // 0x566188: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x566188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_56618c:
    // 0x56618c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x56618cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566190:
    // 0x566190: 0x3e00008  jr          $ra
label_566194:
    if (ctx->pc == 0x566194u) {
        ctx->pc = 0x566194u;
            // 0x566194: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x566198u;
        goto label_566198;
    }
    ctx->pc = 0x566190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x566194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566190u;
            // 0x566194: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566198u;
label_566198:
    // 0x566198: 0x0  nop
    ctx->pc = 0x566198u;
    // NOP
label_56619c:
    // 0x56619c: 0x0  nop
    ctx->pc = 0x56619cu;
    // NOP
}
