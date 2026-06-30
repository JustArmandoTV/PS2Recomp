#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B8B90
// Address: 0x2b8b90 - 0x2b8dd0
void sub_002B8B90_0x2b8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8B90_0x2b8b90");
#endif

    switch (ctx->pc) {
        case 0x2b8bbcu: goto label_2b8bbc;
        case 0x2b8bdcu: goto label_2b8bdc;
        case 0x2b8c34u: goto label_2b8c34;
        case 0x2b8c54u: goto label_2b8c54;
        case 0x2b8c6cu: goto label_2b8c6c;
        case 0x2b8c74u: goto label_2b8c74;
        case 0x2b8cc4u: goto label_2b8cc4;
        case 0x2b8cd0u: goto label_2b8cd0;
        case 0x2b8d00u: goto label_2b8d00;
        case 0x2b8d60u: goto label_2b8d60;
        case 0x2b8d6cu: goto label_2b8d6c;
        case 0x2b8d78u: goto label_2b8d78;
        case 0x2b8d84u: goto label_2b8d84;
        case 0x2b8d90u: goto label_2b8d90;
        case 0x2b8d9cu: goto label_2b8d9c;
        case 0x2b8db4u: goto label_2b8db4;
        default: break;
    }

    ctx->pc = 0x2b8b90u;

    // 0x2b8b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b8b94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b8b98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b8b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b8b9c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2b8b9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2b8ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b8ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b8ba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8ba8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b8ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b8bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8bb4: 0xc0ae404  jal         func_2B9010
    ctx->pc = 0x2B8BB4u;
    SET_GPR_U32(ctx, 31, 0x2B8BBCu);
    ctx->pc = 0x2B8BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8BB4u;
            // 0x2b8bb8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9010u;
    if (runtime->hasFunction(0x2B9010u)) {
        auto targetFn = runtime->lookupFunction(0x2B9010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BBCu; }
        if (ctx->pc != 0x2B8BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9010_0x2b9010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BBCu; }
        if (ctx->pc != 0x2B8BBCu) { return; }
    }
    ctx->pc = 0x2B8BBCu;
label_2b8bbc:
    // 0x2b8bbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b8bc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8bc4: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2b8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x2b8bc8: 0x24422878  addiu       $v0, $v0, 0x2878
    ctx->pc = 0x2b8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10360));
    // 0x2b8bcc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2b8bccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2b8bd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b8bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8bd4: 0xc0ae400  jal         func_2B9000
    ctx->pc = 0x2B8BD4u;
    SET_GPR_U32(ctx, 31, 0x2B8BDCu);
    ctx->pc = 0x2B8BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8BD4u;
            // 0x2b8bd8: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9000u;
    if (runtime->hasFunction(0x2B9000u)) {
        auto targetFn = runtime->lookupFunction(0x2B9000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BDCu; }
        if (ctx->pc != 0x2B8BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9000_0x2b9000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8BDCu; }
        if (ctx->pc != 0x2B8BDCu) { return; }
    }
    ctx->pc = 0x2B8BDCu;
label_2b8bdc:
    // 0x2b8bdc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b8bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b8be0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b8be4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8be8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2b8be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8bec: 0x244227f0  addiu       $v0, $v0, 0x27F0
    ctx->pc = 0x2b8becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10224));
    // 0x2b8bf0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2b8bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2b8bf4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2b8bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b8bf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8bfc: 0x24422828  addiu       $v0, $v0, 0x2828
    ctx->pc = 0x2b8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10280));
    // 0x2b8c00: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x2b8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x2b8c04: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b8c08: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2b8c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x2b8c0c: 0xc440b700  lwc1        $f0, -0x4900($v0)
    ctx->pc = 0x2b8c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8c10: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b8c14: 0xc441b704  lwc1        $f1, -0x48FC($v0)
    ctx->pc = 0x2b8c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8c18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b8c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b8c1c: 0xc460b708  lwc1        $f0, -0x48F8($v1)
    ctx->pc = 0x2b8c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294948616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8c20: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2b8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2b8c24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2b8c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2b8c28: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2b8c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2b8c2c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2B8C2Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C34u);
    ctx->pc = 0x2B8C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C2Cu;
            // 0x2b8c30: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C34u; }
        if (ctx->pc != 0x2B8C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C34u; }
        if (ctx->pc != 0x2B8C34u) { return; }
    }
    ctx->pc = 0x2B8C34u;
label_2b8c34:
    // 0x2b8c34: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c3c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8C3Cu;
    {
        const bool branch_taken_0x2b8c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C3Cu;
            // 0x2b8c40: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8c3c) {
            ctx->pc = 0x2B8C58u;
            goto label_2b8c58;
        }
    }
    ctx->pc = 0x2B8C44u;
    // 0x2b8c44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2b8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2b8c48: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2b8c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b8c4c: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x2B8C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B8C54u);
    ctx->pc = 0x2B8C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C4Cu;
            // 0x2b8c50: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C54u; }
        if (ctx->pc != 0x2B8C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C54u; }
        if (ctx->pc != 0x2B8C54u) { return; }
    }
    ctx->pc = 0x2B8C54u;
label_2b8c54:
    // 0x2b8c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8c58:
    // 0x2b8c58: 0xae440060  sw          $a0, 0x60($s2)
    ctx->pc = 0x2b8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 4));
    // 0x2b8c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c60: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x2b8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2b8c64: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2B8C64u;
    SET_GPR_U32(ctx, 31, 0x2B8C6Cu);
    ctx->pc = 0x2B8C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8C64u;
            // 0x2b8c68: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C6Cu; }
        if (ctx->pc != 0x2B8C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8C6Cu; }
        if (ctx->pc != 0x2B8C6Cu) { return; }
    }
    ctx->pc = 0x2B8C6Cu;
label_2b8c6c:
    // 0x2b8c6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b8c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8c70: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x2b8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_2b8c74:
    // 0x2b8c74: 0x2644006c  addiu       $a0, $s2, 0x6C
    ctx->pc = 0x2b8c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x2b8c78: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2b8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2b8c7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b8c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c80: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2b8c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2b8c84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b8c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b8c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8c8c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2b8c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2b8c90: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2b8c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8c94: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2b8c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b8c98: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b8c9c: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x2b8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2b8ca0: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2b8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2b8ca4: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x2b8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2b8ca8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b8cac: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x2b8cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x2b8cb0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2b8cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x2b8cb4: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x2b8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x2b8cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b8cbc: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2B8CBCu;
    SET_GPR_U32(ctx, 31, 0x2B8CC4u);
    ctx->pc = 0x2B8CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CBCu;
            // 0x2b8cc0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CC4u; }
        if (ctx->pc != 0x2B8CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CC4u; }
        if (ctx->pc != 0x2B8CC4u) { return; }
    }
    ctx->pc = 0x2B8CC4u;
label_2b8cc4:
    // 0x2b8cc4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2b8cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2b8cc8: 0xc0d879c  jal         func_361E70
    ctx->pc = 0x2B8CC8u;
    SET_GPR_U32(ctx, 31, 0x2B8CD0u);
    ctx->pc = 0x2B8CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CC8u;
            // 0x2b8ccc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CD0u; }
        if (ctx->pc != 0x2B8CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8CD0u; }
        if (ctx->pc != 0x2B8CD0u) { return; }
    }
    ctx->pc = 0x2B8CD0u;
label_2b8cd0:
    // 0x2b8cd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b8cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b8cd4: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2b8cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2b8cd8: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2B8CD8u;
    {
        const bool branch_taken_0x2b8cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8cd8) {
            ctx->pc = 0x2B8CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CD8u;
            // 0x2b8cdc: 0x8e43007c  lw          $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8C74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b8c74;
        }
    }
    ctx->pc = 0x2B8CE0u;
    // 0x2b8ce0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b8ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8ce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b8ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b8ce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b8ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8CF4u;
            // 0x2b8cf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8CFCu;
    // 0x2b8cfc: 0x0  nop
    ctx->pc = 0x2b8cfcu;
    // NOP
label_2b8d00:
    // 0x2b8d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b8d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b8d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b8d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b8d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b8d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b8d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d14: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B8D14u;
    {
        const bool branch_taken_0x2b8d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D14u;
            // 0x2b8d18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d14) {
            ctx->pc = 0x2B8DB4u;
            goto label_2b8db4;
        }
    }
    ctx->pc = 0x2B8D1Cu;
    // 0x2b8d1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b8d20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8d24: 0x24632840  addiu       $v1, $v1, 0x2840
    ctx->pc = 0x2b8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10304));
    // 0x2b8d28: 0x24422878  addiu       $v0, $v0, 0x2878
    ctx->pc = 0x2b8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10360));
    // 0x2b8d2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8d30: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B8D30u;
    {
        const bool branch_taken_0x2b8d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D30u;
            // 0x2b8d34: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8d30) {
            ctx->pc = 0x2B8D9Cu;
            goto label_2b8d9c;
        }
    }
    ctx->pc = 0x2B8D38u;
    // 0x2b8d38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b8d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2b8d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b8d40: 0x246327a0  addiu       $v1, $v1, 0x27A0
    ctx->pc = 0x2b8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10144));
    // 0x2b8d44: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2b8d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2b8d48: 0x244227d8  addiu       $v0, $v0, 0x27D8
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10200));
    // 0x2b8d4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8d50: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2b8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2b8d54: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2b8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b8d58: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2B8D58u;
    SET_GPR_U32(ctx, 31, 0x2B8D60u);
    ctx->pc = 0x2B8D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D58u;
            // 0x2b8d5c: 0x24a50bf0  addiu       $a1, $a1, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D60u; }
        if (ctx->pc != 0x2B8D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D60u; }
        if (ctx->pc != 0x2B8D60u) { return; }
    }
    ctx->pc = 0x2B8D60u;
label_2b8d60:
    // 0x2b8d60: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2b8d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2b8d64: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x2B8D64u;
    SET_GPR_U32(ctx, 31, 0x2B8D6Cu);
    ctx->pc = 0x2B8D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D64u;
            // 0x2b8d68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D6Cu; }
        if (ctx->pc != 0x2B8D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D6Cu; }
        if (ctx->pc != 0x2B8D6Cu) { return; }
    }
    ctx->pc = 0x2B8D6Cu;
label_2b8d6c:
    // 0x2b8d6c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2b8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2b8d70: 0xc0ae38c  jal         func_2B8E30
    ctx->pc = 0x2B8D70u;
    SET_GPR_U32(ctx, 31, 0x2B8D78u);
    ctx->pc = 0x2B8D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D70u;
            // 0x2b8d74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8E30u;
    if (runtime->hasFunction(0x2B8E30u)) {
        auto targetFn = runtime->lookupFunction(0x2B8E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D78u; }
        if (ctx->pc != 0x2B8D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8E30_0x2b8e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D78u; }
        if (ctx->pc != 0x2B8D78u) { return; }
    }
    ctx->pc = 0x2B8D78u;
label_2b8d78:
    // 0x2b8d78: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2b8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2b8d7c: 0xc0ae38c  jal         func_2B8E30
    ctx->pc = 0x2B8D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B8D84u);
    ctx->pc = 0x2B8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D7Cu;
            // 0x2b8d80: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8E30u;
    if (runtime->hasFunction(0x2B8E30u)) {
        auto targetFn = runtime->lookupFunction(0x2B8E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D84u; }
        if (ctx->pc != 0x2B8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8E30_0x2b8e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D84u; }
        if (ctx->pc != 0x2B8D84u) { return; }
    }
    ctx->pc = 0x2B8D84u;
label_2b8d84:
    // 0x2b8d84: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2b8d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2b8d88: 0xc0ae374  jal         func_2B8DD0
    ctx->pc = 0x2B8D88u;
    SET_GPR_U32(ctx, 31, 0x2B8D90u);
    ctx->pc = 0x2B8D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D88u;
            // 0x2b8d8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8DD0u;
    if (runtime->hasFunction(0x2B8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2B8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D90u; }
        if (ctx->pc != 0x2B8D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8DD0_0x2b8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D90u; }
        if (ctx->pc != 0x2B8D90u) { return; }
    }
    ctx->pc = 0x2B8D90u;
label_2b8d90:
    // 0x2b8d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8d94: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2B8D94u;
    SET_GPR_U32(ctx, 31, 0x2B8D9Cu);
    ctx->pc = 0x2B8D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8D94u;
            // 0x2b8d98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D9Cu; }
        if (ctx->pc != 0x2B8D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8D9Cu; }
        if (ctx->pc != 0x2B8D9Cu) { return; }
    }
    ctx->pc = 0x2B8D9Cu;
label_2b8d9c:
    // 0x2b8d9c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2b8d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2b8da0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b8da0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b8da4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8DA4u;
    {
        const bool branch_taken_0x2b8da4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b8da4) {
            ctx->pc = 0x2B8DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8DA4u;
            // 0x2b8da8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B8DB8u;
            goto label_2b8db8;
        }
    }
    ctx->pc = 0x2B8DACu;
    // 0x2b8dac: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B8DACu;
    SET_GPR_U32(ctx, 31, 0x2B8DB4u);
    ctx->pc = 0x2B8DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8DACu;
            // 0x2b8db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8DB4u; }
        if (ctx->pc != 0x2B8DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B8DB4u; }
        if (ctx->pc != 0x2B8DB4u) { return; }
    }
    ctx->pc = 0x2B8DB4u;
label_2b8db4:
    // 0x2b8db4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b8db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8db8:
    // 0x2b8db8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b8db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b8dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b8dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b8dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B8DC4u;
            // 0x2b8dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B8DCCu;
    // 0x2b8dcc: 0x0  nop
    ctx->pc = 0x2b8dccu;
    // NOP
}
