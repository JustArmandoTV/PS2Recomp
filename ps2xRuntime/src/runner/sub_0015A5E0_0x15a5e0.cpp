#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A5E0
// Address: 0x15a5e0 - 0x15a670
void sub_0015A5E0_0x15a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A5E0_0x15a5e0");
#endif

    ctx->pc = 0x15a5e0u;

    // 0x15a5e0: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x15a5e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15a5e4: 0x24026500  addiu       $v0, $zero, 0x6500
    ctx->pc = 0x15a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25856));
    // 0x15a5e8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x15a5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x15a5ec: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15A5ECu;
    {
        const bool branch_taken_0x15a5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a5ec) {
            ctx->pc = 0x15A5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A5ECu;
            // 0x15a5f0: 0x8f8583d0  lw          $a1, -0x7C30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A640u;
            goto label_15a640;
        }
    }
    ctx->pc = 0x15A5F4u;
    // 0x15a5f4: 0x24026400  addiu       $v0, $zero, 0x6400
    ctx->pc = 0x15a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25600));
    // 0x15a5f8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15A5F8u;
    {
        const bool branch_taken_0x15a5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a5f8) {
            ctx->pc = 0x15A62Cu;
            goto label_15a62c;
        }
    }
    ctx->pc = 0x15A600u;
    // 0x15a600: 0x24026300  addiu       $v0, $zero, 0x6300
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25344));
    // 0x15a604: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15A604u;
    {
        const bool branch_taken_0x15a604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a604) {
            ctx->pc = 0x15A608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A604u;
            // 0x15a608: 0x8f858410  lw          $a1, -0x7BF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A640u;
            goto label_15a640;
        }
    }
    ctx->pc = 0x15A60Cu;
    // 0x15a60c: 0x24026200  addiu       $v0, $zero, 0x6200
    ctx->pc = 0x15a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x15a610: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A610u;
    {
        const bool branch_taken_0x15a610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a610) {
            ctx->pc = 0x15A620u;
            goto label_15a620;
        }
    }
    ctx->pc = 0x15A618u;
    // 0x15a618: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15A618u;
    {
        const bool branch_taken_0x15a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A618u;
            // 0x15a61c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a618) {
            ctx->pc = 0x15A638u;
            goto label_15a638;
        }
    }
    ctx->pc = 0x15A620u;
label_15a620:
    // 0x15a620: 0x8f858410  lw          $a1, -0x7BF0($gp)
    ctx->pc = 0x15a620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
    // 0x15a624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15A624u;
    {
        const bool branch_taken_0x15a624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a624) {
            ctx->pc = 0x15A640u;
            goto label_15a640;
        }
    }
    ctx->pc = 0x15A62Cu;
label_15a62c:
    // 0x15a62c: 0x8f8583d0  lw          $a1, -0x7C30($gp)
    ctx->pc = 0x15a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935504)));
    // 0x15a630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15A630u;
    {
        const bool branch_taken_0x15a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a630) {
            ctx->pc = 0x15A640u;
            goto label_15a640;
        }
    }
    ctx->pc = 0x15A638u;
label_15a638:
    // 0x15a638: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15A638u;
    {
        const bool branch_taken_0x15a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a638) {
            ctx->pc = 0x15A65Cu;
            goto label_15a65c;
        }
    }
    ctx->pc = 0x15A640u;
label_15a640:
    // 0x15a640: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x15a640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x15a644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a648: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x15a648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15a64c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x15a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x15a650: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15a650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x15a654: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x15a654u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x15a658: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x15a658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_15a65c:
    // 0x15a65c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A664u;
    // 0x15a664: 0x0  nop
    ctx->pc = 0x15a664u;
    // NOP
    // 0x15a668: 0x0  nop
    ctx->pc = 0x15a668u;
    // NOP
    // 0x15a66c: 0x0  nop
    ctx->pc = 0x15a66cu;
    // NOP
}
