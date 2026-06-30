#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195C80
// Address: 0x195c80 - 0x195d50
void sub_00195C80_0x195c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C80_0x195c80");
#endif

    switch (ctx->pc) {
        case 0x195cf8u: goto label_195cf8;
        case 0x195d00u: goto label_195d00;
        case 0x195d24u: goto label_195d24;
        default: break;
    }

    ctx->pc = 0x195c80u;

    // 0x195c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x195c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195c88: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x195c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x195c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x195c90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x195c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x195c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x195c98: 0x2485025c  addiu       $a1, $a0, 0x25C
    ctx->pc = 0x195c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 604));
    // 0x195c9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x195c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x195ca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195ca4: 0x8c8203a4  lw          $v0, 0x3A4($a0)
    ctx->pc = 0x195ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x195ca8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x195CA8u;
    {
        const bool branch_taken_0x195ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195CA8u;
            // 0x195cac: 0x8c860194  lw          $a2, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ca8) {
            ctx->pc = 0x195CE4u;
            goto label_195ce4;
        }
    }
    ctx->pc = 0x195CB0u;
    // 0x195cb0: 0x8c8303a8  lw          $v1, 0x3A8($a0)
    ctx->pc = 0x195cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 936)));
    // 0x195cb4: 0xac8003a4  sw          $zero, 0x3A4($a0)
    ctx->pc = 0x195cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 0));
    // 0x195cb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x195cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x195cbc: 0xac8303a8  sw          $v1, 0x3A8($a0)
    ctx->pc = 0x195cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 936), GPR_U32(ctx, 3));
    // 0x195cc0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x195cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x195cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x195cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195cc8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x195CC8u;
    {
        const bool branch_taken_0x195cc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x195CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195CC8u;
            // 0x195ccc: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cc8) {
            ctx->pc = 0x195CD8u;
            goto label_195cd8;
        }
    }
    ctx->pc = 0x195CD0u;
    // 0x195cd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x195CD0u;
    {
        const bool branch_taken_0x195cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195CD0u;
            // 0x195cd4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195cd0) {
            ctx->pc = 0x195D30u;
            goto label_195d30;
        }
    }
    ctx->pc = 0x195CD8u;
label_195cd8:
    // 0x195cd8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x195cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x195cdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x195cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x195ce0: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x195ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_195ce4:
    // 0x195ce4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x195ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x195ce8: 0x2411fffe  addiu       $s1, $zero, -0x2
    ctx->pc = 0x195ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x195cec: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x195cecu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x195cf0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x195cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195cf4: 0x0  nop
    ctx->pc = 0x195cf4u;
    // NOP
label_195cf8:
    // 0x195cf8: 0xc0656ca  jal         func_195B28
    ctx->pc = 0x195CF8u;
    SET_GPR_U32(ctx, 31, 0x195D00u);
    ctx->pc = 0x195CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195CF8u;
            // 0x195cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B28u;
    if (runtime->hasFunction(0x195B28u)) {
        auto targetFn = runtime->lookupFunction(0x195B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D00u; }
        if (ctx->pc != 0x195D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195B28_0x195b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D00u; }
        if (ctx->pc != 0x195D00u) { return; }
    }
    ctx->pc = 0x195D00u;
label_195d00:
    // 0x195d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195d08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x195d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195d0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x195D0Cu;
    {
        const bool branch_taken_0x195d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195D0Cu;
            // 0x195d10: 0x531824  and         $v1, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195d0c) {
            ctx->pc = 0x195D2Cu;
            goto label_195d2c;
        }
    }
    ctx->pc = 0x195D14u;
    // 0x195d14: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x195D14u;
    {
        const bool branch_taken_0x195d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195d14) {
            ctx->pc = 0x195D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x195D14u;
            // 0x195d18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x195D2Cu;
            goto label_195d2c;
        }
    }
    ctx->pc = 0x195D1Cu;
    // 0x195d1c: 0xc065754  jal         func_195D50
    ctx->pc = 0x195D1Cu;
    SET_GPR_U32(ctx, 31, 0x195D24u);
    ctx->pc = 0x195D50u;
    if (runtime->hasFunction(0x195D50u)) {
        auto targetFn = runtime->lookupFunction(0x195D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D24u; }
        if (ctx->pc != 0x195D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195D50_0x195d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195D24u; }
        if (ctx->pc != 0x195D24u) { return; }
    }
    ctx->pc = 0x195D24u;
label_195d24:
    // 0x195d24: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x195D24u;
    {
        const bool branch_taken_0x195d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x195d24) {
            ctx->pc = 0x195CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_195cf8;
        }
    }
    ctx->pc = 0x195D2Cu;
label_195d2c:
    // 0x195d2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x195d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195d30:
    // 0x195d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x195d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x195d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x195d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x195d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x195d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x195d40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d44: 0x3e00008  jr          $ra
    ctx->pc = 0x195D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195D44u;
            // 0x195d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195D4Cu;
    // 0x195d4c: 0x0  nop
    ctx->pc = 0x195d4cu;
    // NOP
}
