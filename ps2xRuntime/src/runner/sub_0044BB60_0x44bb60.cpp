#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044BB60
// Address: 0x44bb60 - 0x44bcf0
void sub_0044BB60_0x44bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BB60_0x44bb60");
#endif

    switch (ctx->pc) {
        case 0x44bb7cu: goto label_44bb7c;
        case 0x44bb9cu: goto label_44bb9c;
        case 0x44bbe0u: goto label_44bbe0;
        case 0x44bbfcu: goto label_44bbfc;
        case 0x44bc20u: goto label_44bc20;
        case 0x44bc80u: goto label_44bc80;
        case 0x44bc8cu: goto label_44bc8c;
        case 0x44bc98u: goto label_44bc98;
        case 0x44bca4u: goto label_44bca4;
        case 0x44bcb0u: goto label_44bcb0;
        case 0x44bcbcu: goto label_44bcbc;
        case 0x44bcd4u: goto label_44bcd4;
        default: break;
    }

    ctx->pc = 0x44bb60u;

    // 0x44bb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44bb64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x44bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x44bb68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44bb6c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x44bb6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x44bb70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44bb74: 0xc112f74  jal         func_44BDD0
    ctx->pc = 0x44BB74u;
    SET_GPR_U32(ctx, 31, 0x44BB7Cu);
    ctx->pc = 0x44BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BB74u;
            // 0x44bb78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44BDD0u;
    if (runtime->hasFunction(0x44BDD0u)) {
        auto targetFn = runtime->lookupFunction(0x44BDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB7Cu; }
        if (ctx->pc != 0x44BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044BDD0_0x44bdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB7Cu; }
        if (ctx->pc != 0x44BB7Cu) { return; }
    }
    ctx->pc = 0x44BB7Cu;
label_44bb7c:
    // 0x44bb7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44bb80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44bb84: 0x2463d9c0  addiu       $v1, $v1, -0x2640
    ctx->pc = 0x44bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957504));
    // 0x44bb88: 0x2442d9f8  addiu       $v0, $v0, -0x2608
    ctx->pc = 0x44bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957560));
    // 0x44bb8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44bb90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb94: 0xc112f70  jal         func_44BDC0
    ctx->pc = 0x44BB94u;
    SET_GPR_U32(ctx, 31, 0x44BB9Cu);
    ctx->pc = 0x44BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BB94u;
            // 0x44bb98: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44BDC0u;
    if (runtime->hasFunction(0x44BDC0u)) {
        auto targetFn = runtime->lookupFunction(0x44BDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB9Cu; }
        if (ctx->pc != 0x44BB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044BDC0_0x44bdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BB9Cu; }
        if (ctx->pc != 0x44BB9Cu) { return; }
    }
    ctx->pc = 0x44BB9Cu;
label_44bb9c:
    // 0x44bb9c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x44bba0: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x44bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x44bba4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44bba8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x44bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x44bbac: 0x2442d870  addiu       $v0, $v0, -0x2790
    ctx->pc = 0x44bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
    // 0x44bbb0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x44bbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x44bbb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x44bbb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44bbbc: 0x2442d8a8  addiu       $v0, $v0, -0x2758
    ctx->pc = 0x44bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957224));
    // 0x44bbc0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x44bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x44bbc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x44bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x44bbc8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x44bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x44bbcc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x44bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x44bbd0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x44bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x44bbd4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x44bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x44bbd8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x44BBD8u;
    SET_GPR_U32(ctx, 31, 0x44BBE0u);
    ctx->pc = 0x44BBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BBD8u;
            // 0x44bbdc: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BBE0u; }
        if (ctx->pc != 0x44BBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BBE0u; }
        if (ctx->pc != 0x44BBE0u) { return; }
    }
    ctx->pc = 0x44BBE0u;
label_44bbe0:
    // 0x44bbe0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x44bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x44bbe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bbe8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44BBE8u;
    {
        const bool branch_taken_0x44bbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BBE8u;
            // 0x44bbec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bbe8) {
            ctx->pc = 0x44BC00u;
            goto label_44bc00;
        }
    }
    ctx->pc = 0x44BBF0u;
    // 0x44bbf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x44bbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x44bbf4: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x44BBF4u;
    SET_GPR_U32(ctx, 31, 0x44BBFCu);
    ctx->pc = 0x44BBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BBF4u;
            // 0x44bbf8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BBFCu; }
        if (ctx->pc != 0x44BBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BBFCu; }
        if (ctx->pc != 0x44BBFCu) { return; }
    }
    ctx->pc = 0x44BBFCu;
label_44bbfc:
    // 0x44bbfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44bbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_44bc00:
    // 0x44bc00: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x44bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x44bc04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44bc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bc08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44bc0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44bc0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44bc10: 0x3e00008  jr          $ra
    ctx->pc = 0x44BC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BC10u;
            // 0x44bc14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BC18u;
    // 0x44bc18: 0x0  nop
    ctx->pc = 0x44bc18u;
    // NOP
    // 0x44bc1c: 0x0  nop
    ctx->pc = 0x44bc1cu;
    // NOP
label_44bc20:
    // 0x44bc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44bc24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44bc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44bc2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44bc30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44bc30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bc34: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x44BC34u;
    {
        const bool branch_taken_0x44bc34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BC34u;
            // 0x44bc38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc34) {
            ctx->pc = 0x44BCD4u;
            goto label_44bcd4;
        }
    }
    ctx->pc = 0x44BC3Cu;
    // 0x44bc3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44bc40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44bc44: 0x2463d9c0  addiu       $v1, $v1, -0x2640
    ctx->pc = 0x44bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957504));
    // 0x44bc48: 0x2442d9f8  addiu       $v0, $v0, -0x2608
    ctx->pc = 0x44bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957560));
    // 0x44bc4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44bc50: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x44BC50u;
    {
        const bool branch_taken_0x44bc50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BC50u;
            // 0x44bc54: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc50) {
            ctx->pc = 0x44BCBCu;
            goto label_44bcbc;
        }
    }
    ctx->pc = 0x44BC58u;
    // 0x44bc58: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44bc5c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44bc60: 0x2463d970  addiu       $v1, $v1, -0x2690
    ctx->pc = 0x44bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957424));
    // 0x44bc64: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44bc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x44bc68: 0x2442d9a8  addiu       $v0, $v0, -0x2658
    ctx->pc = 0x44bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957480));
    // 0x44bc6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44bc70: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x44bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x44bc74: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x44bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x44bc78: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x44BC78u;
    SET_GPR_U32(ctx, 31, 0x44BC80u);
    ctx->pc = 0x44BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BC78u;
            // 0x44bc7c: 0x24a5b520  addiu       $a1, $a1, -0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BC80u; }
        if (ctx->pc != 0x44BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BC80u; }
        if (ctx->pc != 0x44BC80u) { return; }
    }
    ctx->pc = 0x44BC80u;
label_44bc80:
    // 0x44bc80: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x44bc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x44bc84: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x44BC84u;
    SET_GPR_U32(ctx, 31, 0x44BC8Cu);
    ctx->pc = 0x44BC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BC84u;
            // 0x44bc88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BC8Cu; }
        if (ctx->pc != 0x44BC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BC8Cu; }
        if (ctx->pc != 0x44BC8Cu) { return; }
    }
    ctx->pc = 0x44BC8Cu;
label_44bc8c:
    // 0x44bc8c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x44bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x44bc90: 0xc112f54  jal         func_44BD50
    ctx->pc = 0x44BC90u;
    SET_GPR_U32(ctx, 31, 0x44BC98u);
    ctx->pc = 0x44BC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BC90u;
            // 0x44bc94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44BD50u;
    if (runtime->hasFunction(0x44BD50u)) {
        auto targetFn = runtime->lookupFunction(0x44BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BC98u; }
        if (ctx->pc != 0x44BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044BD50_0x44bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BC98u; }
        if (ctx->pc != 0x44BC98u) { return; }
    }
    ctx->pc = 0x44BC98u;
label_44bc98:
    // 0x44bc98: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x44bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x44bc9c: 0xc112f54  jal         func_44BD50
    ctx->pc = 0x44BC9Cu;
    SET_GPR_U32(ctx, 31, 0x44BCA4u);
    ctx->pc = 0x44BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BC9Cu;
            // 0x44bca0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44BD50u;
    if (runtime->hasFunction(0x44BD50u)) {
        auto targetFn = runtime->lookupFunction(0x44BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCA4u; }
        if (ctx->pc != 0x44BCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044BD50_0x44bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCA4u; }
        if (ctx->pc != 0x44BCA4u) { return; }
    }
    ctx->pc = 0x44BCA4u;
label_44bca4:
    // 0x44bca4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x44bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x44bca8: 0xc112f3c  jal         func_44BCF0
    ctx->pc = 0x44BCA8u;
    SET_GPR_U32(ctx, 31, 0x44BCB0u);
    ctx->pc = 0x44BCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BCA8u;
            // 0x44bcac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44BCF0u;
    if (runtime->hasFunction(0x44BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x44BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCB0u; }
        if (ctx->pc != 0x44BCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044BCF0_0x44bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCB0u; }
        if (ctx->pc != 0x44BCB0u) { return; }
    }
    ctx->pc = 0x44BCB0u;
label_44bcb0:
    // 0x44bcb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44bcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bcb4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x44BCB4u;
    SET_GPR_U32(ctx, 31, 0x44BCBCu);
    ctx->pc = 0x44BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BCB4u;
            // 0x44bcb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCBCu; }
        if (ctx->pc != 0x44BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCBCu; }
        if (ctx->pc != 0x44BCBCu) { return; }
    }
    ctx->pc = 0x44BCBCu;
label_44bcbc:
    // 0x44bcbc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x44bcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x44bcc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44bcc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44bcc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44BCC4u;
    {
        const bool branch_taken_0x44bcc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44bcc4) {
            ctx->pc = 0x44BCC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44BCC4u;
            // 0x44bcc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44BCD8u;
            goto label_44bcd8;
        }
    }
    ctx->pc = 0x44BCCCu;
    // 0x44bccc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44BCCCu;
    SET_GPR_U32(ctx, 31, 0x44BCD4u);
    ctx->pc = 0x44BCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BCCCu;
            // 0x44bcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCD4u; }
        if (ctx->pc != 0x44BCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BCD4u; }
        if (ctx->pc != 0x44BCD4u) { return; }
    }
    ctx->pc = 0x44BCD4u;
label_44bcd4:
    // 0x44bcd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44bcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44bcd8:
    // 0x44bcd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44bcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44bcdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44bcdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44bce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44bce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44bce4: 0x3e00008  jr          $ra
    ctx->pc = 0x44BCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BCE4u;
            // 0x44bce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BCECu;
    // 0x44bcec: 0x0  nop
    ctx->pc = 0x44bcecu;
    // NOP
}
