#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CE00
// Address: 0x29ce00 - 0x29cf70
void sub_0029CE00_0x29ce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE00_0x29ce00");
#endif

    switch (ctx->pc) {
        case 0x29ce40u: goto label_29ce40;
        case 0x29ce90u: goto label_29ce90;
        default: break;
    }

    ctx->pc = 0x29ce00u;

    // 0x29ce00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29ce04: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x29ce04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29ce08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29ce0c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x29ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x29ce10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ce14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29ce18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x29ce1c: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x29ce1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29ce20: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29ce20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ce24: 0x1451821  addu        $v1, $t2, $a1
    ctx->pc = 0x29ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x29ce28: 0x1433024  and         $a2, $t2, $v1
    ctx->pc = 0x29ce28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x29ce2c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x29ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29ce30: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x29ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29ce34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ce38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29CE38u;
    {
        const bool branch_taken_0x29ce38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ce38) {
            ctx->pc = 0x29CE60u;
            goto label_29ce60;
        }
    }
    ctx->pc = 0x29CE40u;
label_29ce40:
    // 0x29ce40: 0x1461821  addu        $v1, $t2, $a2
    ctx->pc = 0x29ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x29ce44: 0x1433024  and         $a2, $t2, $v1
    ctx->pc = 0x29ce44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x29ce48: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x29ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29ce4c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x29ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x29ce50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ce54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29CE54u;
    {
        const bool branch_taken_0x29ce54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ce54) {
            ctx->pc = 0x29CE40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ce40;
        }
    }
    ctx->pc = 0x29CE5Cu;
    // 0x29ce5c: 0x0  nop
    ctx->pc = 0x29ce5cu;
    // NOP
label_29ce60:
    // 0x29ce60: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x29ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29ce64: 0x6a3024  and         $a2, $v1, $t2
    ctx->pc = 0x29ce64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x29ce68: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x29ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29ce6c: 0x6a3824  and         $a3, $v1, $t2
    ctx->pc = 0x29ce6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x29ce70: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x29ce70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29ce74: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x29ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x29ce78: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x29ce78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29ce7c: 0x11a00038  beqz        $t5, . + 4 + (0x38 << 2)
    ctx->pc = 0x29CE7Cu;
    {
        const bool branch_taken_0x29ce7c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ce7c) {
            ctx->pc = 0x29CF60u;
            goto label_29cf60;
        }
    }
    ctx->pc = 0x29CE84u;
    // 0x29ce84: 0x3c039e37  lui         $v1, 0x9E37
    ctx->pc = 0x29ce84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40503 << 16));
    // 0x29ce88: 0x346379b1  ori         $v1, $v1, 0x79B1
    ctx->pc = 0x29ce88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31153);
    // 0x29ce8c: 0xd6102  srl         $t4, $t5, 4
    ctx->pc = 0x29ce8cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
label_29ce90:
    // 0x29ce90: 0xe6582b  sltu        $t3, $a3, $a2
    ctx->pc = 0x29ce90u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29ce94: 0x1836018  mult        $t4, $t4, $v1
    ctx->pc = 0x29ce94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x29ce98: 0x15600005  bnez        $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CE98u;
    {
        const bool branch_taken_0x29ce98 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CE98u;
            // 0x29ce9c: 0x14c5024  and         $t2, $t2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce98) {
            ctx->pc = 0x29CEB0u;
            goto label_29ceb0;
        }
    }
    ctx->pc = 0x29CEA0u;
    // 0x29cea0: 0xaa082b  sltu        $at, $a1, $t2
    ctx->pc = 0x29cea0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x29cea4: 0x14200024  bnez        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x29CEA4u;
    {
        const bool branch_taken_0x29cea4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cea4) {
            ctx->pc = 0x29CF38u;
            goto label_29cf38;
        }
    }
    ctx->pc = 0x29CEACu;
    // 0x29ceac: 0x0  nop
    ctx->pc = 0x29ceacu;
    // NOP
label_29ceb0:
    // 0x29ceb0: 0xe5082b  sltu        $at, $a3, $a1
    ctx->pc = 0x29ceb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x29ceb4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x29CEB4u;
    {
        const bool branch_taken_0x29ceb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ceb4) {
            ctx->pc = 0x29CED8u;
            goto label_29ced8;
        }
    }
    ctx->pc = 0x29CEBCu;
    // 0x29cebc: 0xaa082b  sltu        $at, $a1, $t2
    ctx->pc = 0x29cebcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x29cec0: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x29CEC0u;
    {
        const bool branch_taken_0x29cec0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cec0) {
            ctx->pc = 0x29CF38u;
            goto label_29cf38;
        }
    }
    ctx->pc = 0x29CEC8u;
    // 0x29cec8: 0xea082b  sltu        $at, $a3, $t2
    ctx->pc = 0x29cec8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x29cecc: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x29CECCu;
    {
        const bool branch_taken_0x29cecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cecc) {
            ctx->pc = 0x29CF38u;
            goto label_29cf38;
        }
    }
    ctx->pc = 0x29CED4u;
    // 0x29ced4: 0x0  nop
    ctx->pc = 0x29ced4u;
    // NOP
label_29ced8:
    // 0x29ced8: 0xaa082b  sltu        $at, $a1, $t2
    ctx->pc = 0x29ced8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x29cedc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x29CEDCu;
    {
        const bool branch_taken_0x29cedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cedc) {
            ctx->pc = 0x29CEF0u;
            goto label_29cef0;
        }
    }
    ctx->pc = 0x29CEE4u;
    // 0x29cee4: 0x146502b  sltu        $t2, $t2, $a2
    ctx->pc = 0x29cee4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29cee8: 0x15400013  bnez        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x29CEE8u;
    {
        const bool branch_taken_0x29cee8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cee8) {
            ctx->pc = 0x29CF38u;
            goto label_29cf38;
        }
    }
    ctx->pc = 0x29CEF0u;
label_29cef0:
    // 0x29cef0: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x29cef0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29cef4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x29cef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x29cef8: 0xad2d0000  sw          $t5, 0x0($t1)
    ctx->pc = 0x29cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 13));
    // 0x29cefc: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x29cefcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cf00: 0x8c8b0000  lw          $t3, 0x0($a0)
    ctx->pc = 0x29cf00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cf04: 0xea4821  addu        $t1, $a3, $t2
    ctx->pc = 0x29cf04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x29cf08: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x29cf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x29cf0c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x29cf0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x29cf10: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29cf14: 0x1695021  addu        $t2, $t3, $t1
    ctx->pc = 0x29cf14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x29cf18: 0x8d4a0004  lw          $t2, 0x4($t2)
    ctx->pc = 0x29cf18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x29cf1c: 0x1654821  addu        $t1, $t3, $a1
    ctx->pc = 0x29cf1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x29cf20: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x29cf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf24: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x29cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x29cf28: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29cf28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cf2c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x29cf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x29cf30: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x29cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x29cf34: 0x0  nop
    ctx->pc = 0x29cf34u;
    // NOP
label_29cf38:
    // 0x29cf38: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x29cf38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cf3c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x29cf3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29cf40: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x29cf40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cf44: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x29cf44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x29cf48: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x29cf48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29cf4c: 0x1285821  addu        $t3, $t1, $t0
    ctx->pc = 0x29cf4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x29cf50: 0x8d6d0000  lw          $t5, 0x0($t3)
    ctx->pc = 0x29cf50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x29cf54: 0x55a0ffce  bnel        $t5, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x29CF54u;
    {
        const bool branch_taken_0x29cf54 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cf54) {
            ctx->pc = 0x29CF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF54u;
            // 0x29cf58: 0xd6102  srl         $t4, $t5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CE90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29ce90;
        }
    }
    ctx->pc = 0x29CF5Cu;
    // 0x29cf5c: 0x0  nop
    ctx->pc = 0x29cf5cu;
    // NOP
label_29cf60:
    // 0x29cf60: 0x3e00008  jr          $ra
    ctx->pc = 0x29CF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CF68u;
    // 0x29cf68: 0x0  nop
    ctx->pc = 0x29cf68u;
    // NOP
    // 0x29cf6c: 0x0  nop
    ctx->pc = 0x29cf6cu;
    // NOP
}
