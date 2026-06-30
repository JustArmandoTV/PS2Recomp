#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EC78
// Address: 0x19ec78 - 0x19ece8
void sub_0019EC78_0x19ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EC78_0x19ec78");
#endif

    switch (ctx->pc) {
        case 0x19ecd0u: goto label_19ecd0;
        default: break;
    }

    ctx->pc = 0x19ec78u;

    // 0x19ec78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ec78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ec7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ec80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ec84: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x19ec84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19ec88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19ec8c: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x19ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x19ec90: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19EC90u;
    {
        const bool branch_taken_0x19ec90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC90u;
            // 0x19ec94: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec90) {
            ctx->pc = 0x19ECC0u;
            goto label_19ecc0;
        }
    }
    ctx->pc = 0x19EC98u;
    // 0x19ec98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EC98u;
    {
        const bool branch_taken_0x19ec98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC98u;
            // 0x19ec9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec98) {
            ctx->pc = 0x19ECB0u;
            goto label_19ecb0;
        }
    }
    ctx->pc = 0x19ECA0u;
    // 0x19eca0: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19ECA0u;
    {
        const bool branch_taken_0x19eca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19eca0) {
            ctx->pc = 0x19ECA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECA0u;
            // 0x19eca4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ECD0u;
            goto label_19ecd0;
        }
    }
    ctx->pc = 0x19ECA8u;
    // 0x19eca8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19ECA8u;
    {
        const bool branch_taken_0x19eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECA8u;
            // 0x19ecac: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eca8) {
            ctx->pc = 0x19ECC8u;
            goto label_19ecc8;
        }
    }
    ctx->pc = 0x19ECB0u;
label_19ecb0:
    // 0x19ecb0: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19ECB0u;
    {
        const bool branch_taken_0x19ecb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x19ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECB0u;
            // 0x19ecb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecb0) {
            ctx->pc = 0x19ECD4u;
            goto label_19ecd4;
        }
    }
    ctx->pc = 0x19ECB8u;
    // 0x19ecb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ECB8u;
    {
        const bool branch_taken_0x19ecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECB8u;
            // 0x19ecbc: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecb8) {
            ctx->pc = 0x19ECC8u;
            goto label_19ecc8;
        }
    }
    ctx->pc = 0x19ECC0u;
label_19ecc0:
    // 0x19ecc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ECC0u;
    {
        const bool branch_taken_0x19ecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ECC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECC0u;
            // 0x19ecc4: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ecc0) {
            ctx->pc = 0x19ECD0u;
            goto label_19ecd0;
        }
    }
    ctx->pc = 0x19ECC8u;
label_19ecc8:
    // 0x19ecc8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19ECC8u;
    SET_GPR_U32(ctx, 31, 0x19ECD0u);
    ctx->pc = 0x19ECCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECC8u;
            // 0x19eccc: 0x24849e60  addiu       $a0, $a0, -0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECD0u; }
        if (ctx->pc != 0x19ECD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ECD0u; }
        if (ctx->pc != 0x19ECD0u) { return; }
    }
    ctx->pc = 0x19ECD0u;
label_19ecd0:
    // 0x19ecd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ecd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ecd4:
    // 0x19ecd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ecd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ecd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19ecd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x19ECDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ECDCu;
            // 0x19ece0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ECE4u;
    // 0x19ece4: 0x0  nop
    ctx->pc = 0x19ece4u;
    // NOP
}
