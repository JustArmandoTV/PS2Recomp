#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019AA08
// Address: 0x19aa08 - 0x19ab90
void sub_0019AA08_0x19aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AA08_0x19aa08");
#endif

    switch (ctx->pc) {
        case 0x19aa70u: goto label_19aa70;
        case 0x19aabcu: goto label_19aabc;
        case 0x19aae8u: goto label_19aae8;
        case 0x19aaf8u: goto label_19aaf8;
        case 0x19ab0cu: goto label_19ab0c;
        case 0x19ab28u: goto label_19ab28;
        case 0x19ab5cu: goto label_19ab5c;
        default: break;
    }

    ctx->pc = 0x19aa08u;

    // 0x19aa08: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19aa0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aa10: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19aa14: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x19aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x19aa18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19aa18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa1c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19aa20: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x19aa24: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19aa28: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x19aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x19aa2c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x19aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x19aa30: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x19aa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x19aa34: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x19aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x19aa38: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x19aa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x19aa3c: 0x8ea201d0  lw          $v0, 0x1D0($s5)
    ctx->pc = 0x19aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 464)));
    // 0x19aa40: 0x10430046  beq         $v0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x19AA40u;
    {
        const bool branch_taken_0x19aa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19AA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA40u;
            // 0x19aa44: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa40) {
            ctx->pc = 0x19AB5Cu;
            goto label_19ab5c;
        }
    }
    ctx->pc = 0x19AA48u;
    // 0x19aa48: 0x26a20004  addiu       $v0, $s5, 0x4
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x19aa4c: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x19aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x19aa50: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x19aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x19aa54: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x19aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x19aa58: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x19aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x19aa5c: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x19aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x19aa60: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x19aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x19aa64: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x19aa64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa68: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x19aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x19aa6c: 0x26e300c0  addiu       $v1, $s7, 0xC0
    ctx->pc = 0x19aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
label_19aa70:
    // 0x19aa70: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x19aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x19aa74: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x19aa74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19aa78: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aa7c: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x19aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x19aa80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa84: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x19aa84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19aa88: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x19aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x19aa8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19aa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x19aa90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa94: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x19aa94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19aa98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19aa9c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x19aa9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19aaa0: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x19aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x19aaa4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x19aaa8: 0x62b021  addu        $s6, $v1, $v0
    ctx->pc = 0x19aaa8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19aaac: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x19aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x19aab0: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x19aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x19aab4: 0xc06e98e  jal         func_1BA638
    ctx->pc = 0x19AAB4u;
    SET_GPR_U32(ctx, 31, 0x19AABCu);
    ctx->pc = 0x19AAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAB4u;
            // 0x19aab8: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA638u;
    if (runtime->hasFunction(0x1BA638u)) {
        auto targetFn = runtime->lookupFunction(0x1BA638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AABCu; }
        if (ctx->pc != 0x19AABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA638_0x1ba638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AABCu; }
        if (ctx->pc != 0x19AABCu) { return; }
    }
    ctx->pc = 0x19AABCu;
label_19aabc:
    // 0x19aabc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aac0: 0x5443001e  bnel        $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x19AAC0u;
    {
        const bool branch_taken_0x19aac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19aac0) {
            ctx->pc = 0x19AAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAC0u;
            // 0x19aac4: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AB3Cu;
            goto label_19ab3c;
        }
    }
    ctx->pc = 0x19AAC8u;
    // 0x19aac8: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x19aac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aacc: 0x5602001b  bnel        $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19AACCu;
    {
        const bool branch_taken_0x19aacc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x19aacc) {
            ctx->pc = 0x19AAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AACCu;
            // 0x19aad0: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AB3Cu;
            goto label_19ab3c;
        }
    }
    ctx->pc = 0x19AAD4u;
    // 0x19aad4: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x19aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x19aad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19aad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aadc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19aadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aae0: 0xc06eb92  jal         func_1BAE48
    ctx->pc = 0x19AAE0u;
    SET_GPR_U32(ctx, 31, 0x19AAE8u);
    ctx->pc = 0x19AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAE0u;
            // 0x19aae4: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAE48u;
    if (runtime->hasFunction(0x1BAE48u)) {
        auto targetFn = runtime->lookupFunction(0x1BAE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAE8u; }
        if (ctx->pc != 0x19AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAE48_0x1bae48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAE8u; }
        if (ctx->pc != 0x19AAE8u) { return; }
    }
    ctx->pc = 0x19AAE8u;
label_19aae8:
    // 0x19aae8: 0x54500005  bnel        $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AAE8u;
    {
        const bool branch_taken_0x19aae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x19aae8) {
            ctx->pc = 0x19AAECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAE8u;
            // 0x19aaec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AB00u;
            goto label_19ab00;
        }
    }
    ctx->pc = 0x19AAF0u;
    // 0x19aaf0: 0xc066ae4  jal         func_19AB90
    ctx->pc = 0x19AAF0u;
    SET_GPR_U32(ctx, 31, 0x19AAF8u);
    ctx->pc = 0x19AAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AAF0u;
            // 0x19aaf4: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AB90u;
    if (runtime->hasFunction(0x19AB90u)) {
        auto targetFn = runtime->lookupFunction(0x19AB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAF8u; }
        if (ctx->pc != 0x19AAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019AB90_0x19ab90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AAF8u; }
        if (ctx->pc != 0x19AAF8u) { return; }
    }
    ctx->pc = 0x19AAF8u;
label_19aaf8:
    // 0x19aaf8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x19aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x19aafc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19ab00:
    // 0x19ab00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ab00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab04: 0xc06ebbe  jal         func_1BAEF8
    ctx->pc = 0x19AB04u;
    SET_GPR_U32(ctx, 31, 0x19AB0Cu);
    ctx->pc = 0x19AB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB04u;
            // 0x19ab08: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAEF8u;
    if (runtime->hasFunction(0x1BAEF8u)) {
        auto targetFn = runtime->lookupFunction(0x1BAEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB0Cu; }
        if (ctx->pc != 0x19AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAEF8_0x1baef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB0Cu; }
        if (ctx->pc != 0x19AB0Cu) { return; }
    }
    ctx->pc = 0x19AB0Cu;
label_19ab0c:
    // 0x19ab0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab10: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AB10u;
    {
        const bool branch_taken_0x19ab10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19AB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB10u;
            // 0x19ab14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab10) {
            ctx->pc = 0x19AB20u;
            goto label_19ab20;
        }
    }
    ctx->pc = 0x19AB18u;
    // 0x19ab18: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x19ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ab1c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x19ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_19ab20:
    // 0x19ab20: 0xc06ebd4  jal         func_1BAF50
    ctx->pc = 0x19AB20u;
    SET_GPR_U32(ctx, 31, 0x19AB28u);
    ctx->pc = 0x19AB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB20u;
            // 0x19ab24: 0x27a6000c  addiu       $a2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAF50u;
    if (runtime->hasFunction(0x1BAF50u)) {
        auto targetFn = runtime->lookupFunction(0x1BAF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB28u; }
        if (ctx->pc != 0x19AB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAF50_0x1baf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB28u; }
        if (ctx->pc != 0x19AB28u) { return; }
    }
    ctx->pc = 0x19AB28u;
label_19ab28:
    // 0x19ab28: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19AB28u;
    {
        const bool branch_taken_0x19ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19AB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB28u;
            // 0x19ab2c: 0x26e20001  addiu       $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab28) {
            ctx->pc = 0x19AB3Cu;
            goto label_19ab3c;
        }
    }
    ctx->pc = 0x19AB30u;
    // 0x19ab30: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x19ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x19ab34: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x19ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x19ab38: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_19ab3c:
    // 0x19ab3c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x19ab3cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ab40: 0x2ee30020  sltiu       $v1, $s7, 0x20
    ctx->pc = 0x19ab40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x19ab44: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x19AB44u;
    {
        const bool branch_taken_0x19ab44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ab44) {
            ctx->pc = 0x19AB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB44u;
            // 0x19ab48: 0x26e300c0  addiu       $v1, $s7, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19AA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19aa70;
        }
    }
    ctx->pc = 0x19AB4Cu;
    // 0x19ab4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ab50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab54: 0xc066afa  jal         func_19ABE8
    ctx->pc = 0x19AB54u;
    SET_GPR_U32(ctx, 31, 0x19AB5Cu);
    ctx->pc = 0x19AB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB54u;
            // 0x19ab58: 0xaea201d0  sw          $v0, 0x1D0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ABE8u;
    if (runtime->hasFunction(0x19ABE8u)) {
        auto targetFn = runtime->lookupFunction(0x19ABE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB5Cu; }
        if (ctx->pc != 0x19AB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019ABE8_0x19abe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AB5Cu; }
        if (ctx->pc != 0x19AB5Cu) { return; }
    }
    ctx->pc = 0x19AB5Cu;
label_19ab5c:
    // 0x19ab5c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19ab5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ab60: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x19ab60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19ab64: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19ab64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ab68: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x19ab68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19ab6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19ab6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ab70: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x19ab70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19ab74: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x19ab74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19ab78: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x19ab78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19ab7c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x19ab7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19ab80: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x19ab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x19AB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AB84u;
            // 0x19ab88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AB8Cu;
    // 0x19ab8c: 0x0  nop
    ctx->pc = 0x19ab8cu;
    // NOP
}
