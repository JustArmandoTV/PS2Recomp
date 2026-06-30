#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305770
// Address: 0x305770 - 0x305860
void sub_00305770_0x305770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305770_0x305770");
#endif

    switch (ctx->pc) {
        case 0x305798u: goto label_305798;
        case 0x3057f0u: goto label_3057f0;
        case 0x305820u: goto label_305820;
        case 0x30583cu: goto label_30583c;
        default: break;
    }

    ctx->pc = 0x305770u;

    // 0x305770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x305770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x305774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x305774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x305778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x305778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30577c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305780: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x305780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305788: 0x8c910d74  lw          $s1, 0xD74($a0)
    ctx->pc = 0x305788u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
    // 0x30578c: 0x26500580  addiu       $s0, $s2, 0x580
    ctx->pc = 0x30578cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x305790: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x305790u;
    SET_GPR_U32(ctx, 31, 0x305798u);
    ctx->pc = 0x305794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305790u;
            // 0x305794: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305798u; }
        if (ctx->pc != 0x305798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305798u; }
        if (ctx->pc != 0x305798u) { return; }
    }
    ctx->pc = 0x305798u;
label_305798:
    // 0x305798: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x305798u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x30579c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x30579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x3057a0: 0xae470dbc  sw          $a3, 0xDBC($s2)
    ctx->pc = 0x3057a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3516), GPR_U32(ctx, 7));
    // 0x3057a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3057a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3057a8: 0xae470694  sw          $a3, 0x694($s2)
    ctx->pc = 0x3057a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 7));
    // 0x3057ac: 0xc461c6b8  lwc1        $f1, -0x3948($v1)
    ctx->pc = 0x3057acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3057b0: 0x8e460550  lw          $a2, 0x550($s2)
    ctx->pc = 0x3057b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
    // 0x3057b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3057b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3057b8: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x3057b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
    // 0x3057bc: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x3057bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x3057c0: 0xacc7002c  sw          $a3, 0x2C($a2)
    ctx->pc = 0x3057c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 7));
    // 0x3057c4: 0xc4601360  lwc1        $f0, 0x1360($v1)
    ctx->pc = 0x3057c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3057c8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3057c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3057cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3057ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3057d0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3057d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3057d4: 0xe6420de0  swc1        $f2, 0xDE0($s2)
    ctx->pc = 0x3057d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3552), bits); }
    // 0x3057d8: 0xe6410ddc  swc1        $f1, 0xDDC($s2)
    ctx->pc = 0x3057d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3548), bits); }
    // 0x3057dc: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x3057dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
    // 0x3057e0: 0xae050118  sw          $a1, 0x118($s0)
    ctx->pc = 0x3057e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 5));
    // 0x3057e4: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x3057e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x3057e8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3057E8u;
    SET_GPR_U32(ctx, 31, 0x3057F0u);
    ctx->pc = 0x3057ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3057E8u;
            // 0x3057ec: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3057F0u; }
        if (ctx->pc != 0x3057F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3057F0u; }
        if (ctx->pc != 0x3057F0u) { return; }
    }
    ctx->pc = 0x3057F0u;
label_3057f0:
    // 0x3057f0: 0x8e450da0  lw          $a1, 0xDA0($s2)
    ctx->pc = 0x3057f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
    // 0x3057f4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3057f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3057f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3057f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3057fc: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x3057fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
    // 0x305800: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x305800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x305804: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x305804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x305808: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x305808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x30580c: 0x26460560  addiu       $a2, $s2, 0x560
    ctx->pc = 0x30580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
    // 0x305810: 0xae420da0  sw          $v0, 0xDA0($s2)
    ctx->pc = 0x305810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3488), GPR_U32(ctx, 2));
    // 0x305814: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x305814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x305818: 0xc0c6250  jal         func_318940
    ctx->pc = 0x305818u;
    SET_GPR_U32(ctx, 31, 0x305820u);
    ctx->pc = 0x30581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305818u;
            // 0x30581c: 0xae2702b0  sw          $a3, 0x2B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305820u; }
        if (ctx->pc != 0x305820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305820u; }
        if (ctx->pc != 0x305820u) { return; }
    }
    ctx->pc = 0x305820u;
label_305820:
    // 0x305820: 0xa6400c40  sh          $zero, 0xC40($s2)
    ctx->pc = 0x305820u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3136), (uint16_t)GPR_U32(ctx, 0));
    // 0x305824: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305828: 0xa6420c44  sh          $v0, 0xC44($s2)
    ctx->pc = 0x305828u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3140), (uint16_t)GPR_U32(ctx, 2));
    // 0x30582c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305830: 0xa24211a8  sb          $v0, 0x11A8($s2)
    ctx->pc = 0x305830u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4520), (uint8_t)GPR_U32(ctx, 2));
    // 0x305834: 0xc07649c  jal         func_1D9270
    ctx->pc = 0x305834u;
    SET_GPR_U32(ctx, 31, 0x30583Cu);
    ctx->pc = 0x305838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305834u;
            // 0x305838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30583Cu; }
        if (ctx->pc != 0x30583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30583Cu; }
        if (ctx->pc != 0x30583Cu) { return; }
    }
    ctx->pc = 0x30583Cu;
label_30583c:
    // 0x30583c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30583cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305840: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x305840u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30584c: 0x3e00008  jr          $ra
    ctx->pc = 0x30584Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30584Cu;
            // 0x305850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305854u;
    // 0x305854: 0x0  nop
    ctx->pc = 0x305854u;
    // NOP
    // 0x305858: 0x0  nop
    ctx->pc = 0x305858u;
    // NOP
    // 0x30585c: 0x0  nop
    ctx->pc = 0x30585cu;
    // NOP
}
