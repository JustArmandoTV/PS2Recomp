#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC928
// Address: 0x1bc928 - 0x1bc9b0
void sub_001BC928_0x1bc928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC928_0x1bc928");
#endif

    switch (ctx->pc) {
        case 0x1bc968u: goto label_1bc968;
        default: break;
    }

    ctx->pc = 0x1bc928u;

    // 0x1bc928: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1bc928u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc92c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1bc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1bc930: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BC930u;
    {
        const bool branch_taken_0x1bc930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC930u;
            // 0x1bc934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc930) {
            ctx->pc = 0x1BC9A4u;
            goto label_1bc9a4;
        }
    }
    ctx->pc = 0x1BC938u;
    // 0x1bc938: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1bc938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bc93c: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BC93Cu;
    {
        const bool branch_taken_0x1bc93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc93c) {
            ctx->pc = 0x1BC940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC93Cu;
            // 0x1bc940: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9A8u;
            goto label_1bc9a8;
        }
    }
    ctx->pc = 0x1BC944u;
    // 0x1bc944: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BC944u;
    {
        const bool branch_taken_0x1bc944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc944) {
            ctx->pc = 0x1BC948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC944u;
            // 0x1bc948: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9A8u;
            goto label_1bc9a8;
        }
    }
    ctx->pc = 0x1BC94Cu;
    // 0x1bc94c: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x1bc94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1bc950: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1bc950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bc954: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BC954u;
    {
        const bool branch_taken_0x1bc954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc954) {
            ctx->pc = 0x1BC958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC954u;
            // 0x1bc958: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9A8u;
            goto label_1bc9a8;
        }
    }
    ctx->pc = 0x1BC95Cu;
    // 0x1bc95c: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1bc960: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1bc960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bc964: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1bc964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1bc968:
    // 0x1bc968: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bc968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bc96c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1bc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bc970: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bc970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bc974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bc974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bc978: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1bc978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bc97c: 0x2446ffd0  addiu       $a2, $v0, -0x30
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1bc980: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BC980u;
    {
        const bool branch_taken_0x1bc980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1BC984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC980u;
            // 0x1bc984: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc980) {
            ctx->pc = 0x1BC9A4u;
            goto label_1bc9a4;
        }
    }
    ctx->pc = 0x1BC988u;
    // 0x1bc988: 0x50670007  beql        $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BC988u;
    {
        const bool branch_taken_0x1bc988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1bc988) {
            ctx->pc = 0x1BC98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC988u;
            // 0x1bc98c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9A8u;
            goto label_1bc9a8;
        }
    }
    ctx->pc = 0x1BC990u;
    // 0x1bc990: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC990u;
    {
        const bool branch_taken_0x1bc990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc990) {
            ctx->pc = 0x1BC994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC990u;
            // 0x1bc994: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9A8u;
            goto label_1bc9a8;
        }
    }
    ctx->pc = 0x1BC998u;
    // 0x1bc998: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1bc998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bc99c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BC99Cu;
    {
        const bool branch_taken_0x1bc99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc99c) {
            ctx->pc = 0x1BC9A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC99Cu;
            // 0x1bc9a0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BC968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bc968;
        }
    }
    ctx->pc = 0x1BC9A4u;
label_1bc9a4:
    // 0x1bc9a4: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1bc9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1bc9a8:
    // 0x1bc9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC9A8u;
            // 0x1bc9ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC9B0u;
}
