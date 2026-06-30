#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AAB8
// Address: 0x17aab8 - 0x17ab20
void sub_0017AAB8_0x17aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AAB8_0x17aab8");
#endif

    switch (ctx->pc) {
        case 0x17aaccu: goto label_17aacc;
        case 0x17aae4u: goto label_17aae4;
        case 0x17ab08u: goto label_17ab08;
        default: break;
    }

    ctx->pc = 0x17aab8u;

    // 0x17aab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17aabc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17aac0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17aac4: 0xc061f80  jal         func_187E00
    ctx->pc = 0x17AAC4u;
    SET_GPR_U32(ctx, 31, 0x17AACCu);
    ctx->pc = 0x17AAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAC4u;
            // 0x17aac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E00u;
    if (runtime->hasFunction(0x187E00u)) {
        auto targetFn = runtime->lookupFunction(0x187E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AACCu; }
        if (ctx->pc != 0x17AACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E00_0x187e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AACCu; }
        if (ctx->pc != 0x17AACCu) { return; }
    }
    ctx->pc = 0x17AACCu;
label_17aacc:
    // 0x17aacc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17aad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aad4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AAD4u;
    {
        const bool branch_taken_0x17aad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAD4u;
            // 0x17aad8: 0x248458b0  addiu       $a0, $a0, 0x58B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aad4) {
            ctx->pc = 0x17AAF0u;
            goto label_17aaf0;
        }
    }
    ctx->pc = 0x17AADCu;
    // 0x17aadc: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17AADCu;
    SET_GPR_U32(ctx, 31, 0x17AAE4u);
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAE4u; }
        if (ctx->pc != 0x17AAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AAE4u; }
        if (ctx->pc != 0x17AAE4u) { return; }
    }
    ctx->pc = 0x17AAE4u;
label_17aae4:
    // 0x17aae4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17AAE4u;
    {
        const bool branch_taken_0x17aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAE4u;
            // 0x17aae8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aae4) {
            ctx->pc = 0x17AB14u;
            goto label_17ab14;
        }
    }
    ctx->pc = 0x17AAECu;
    // 0x17aaec: 0x0  nop
    ctx->pc = 0x17aaecu;
    // NOP
label_17aaf0:
    // 0x17aaf0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17aaf4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AAF4u;
    {
        const bool branch_taken_0x17aaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17aaf4) {
            ctx->pc = 0x17AAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AAF4u;
            // 0x17aaf8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AB10u;
            goto label_17ab10;
        }
    }
    ctx->pc = 0x17AAFCu;
    // 0x17aafc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17ab00: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17AB00u;
    SET_GPR_U32(ctx, 31, 0x17AB08u);
    ctx->pc = 0x17AB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB00u;
            // 0x17ab04: 0x248458d0  addiu       $a0, $a0, 0x58D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB08u; }
        if (ctx->pc != 0x17AB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB08u; }
        if (ctx->pc != 0x17AB08u) { return; }
    }
    ctx->pc = 0x17AB08u;
label_17ab08:
    // 0x17ab08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AB08u;
    {
        const bool branch_taken_0x17ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB08u;
            // 0x17ab0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab08) {
            ctx->pc = 0x17AB14u;
            goto label_17ab14;
        }
    }
    ctx->pc = 0x17AB10u;
label_17ab10:
    // 0x17ab10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ab10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ab14:
    // 0x17ab14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17ab14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ab18: 0x8061f9e  j           func_187E78
    ctx->pc = 0x17AB18u;
    ctx->pc = 0x17AB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB18u;
            // 0x17ab1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E78u;
    if (runtime->hasFunction(0x187E78u)) {
        auto targetFn = runtime->lookupFunction(0x187E78u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187E78_0x187e78(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17AB20u;
}
