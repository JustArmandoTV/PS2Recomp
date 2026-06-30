#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00253DA0
// Address: 0x253da0 - 0x254150
void sub_00253DA0_0x253da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253DA0_0x253da0");
#endif

    switch (ctx->pc) {
        case 0x253dc0u: goto label_253dc0;
        case 0x253ea8u: goto label_253ea8;
        case 0x253f10u: goto label_253f10;
        case 0x253f50u: goto label_253f50;
        case 0x254040u: goto label_254040;
        case 0x2540a0u: goto label_2540a0;
        case 0x2540c0u: goto label_2540c0;
        default: break;
    }

    ctx->pc = 0x253da0u;

    // 0x253da0: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x253da0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x253da4: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x253DA4u;
    {
        const bool branch_taken_0x253da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253DA4u;
            // 0x253da8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253da4) {
            ctx->pc = 0x253ED8u;
            goto label_253ed8;
        }
    }
    ctx->pc = 0x253DACu;
    // 0x253dac: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x253dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x253db0: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x253DB0u;
    {
        const bool branch_taken_0x253db0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x253DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253DB0u;
            // 0x253db4: 0x24cbfff8  addiu       $t3, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253db0) {
            ctx->pc = 0x253E98u;
            goto label_253e98;
        }
    }
    ctx->pc = 0x253DB8u;
    // 0x253db8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x253db8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dbc: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x253dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_253dc0:
    // 0x253dc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253dc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253dc4: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x253dc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x253dc8: 0x18b682a  slt         $t5, $t4, $t3
    ctx->pc = 0x253dc8u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x253dcc: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253dccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253dd0: 0x95ee0000  lhu         $t6, 0x0($t7)
    ctx->pc = 0x253dd0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x253dd4: 0xa46e0000  sh          $t6, 0x0($v1)
    ctx->pc = 0x253dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x253dd8: 0x95ee0002  lhu         $t6, 0x2($t7)
    ctx->pc = 0x253dd8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x253ddc: 0xa46e0002  sh          $t6, 0x2($v1)
    ctx->pc = 0x253ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x253de0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253de0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253de4: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253de4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253de8: 0x95ee0004  lhu         $t6, 0x4($t7)
    ctx->pc = 0x253de8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x253dec: 0xa46e0004  sh          $t6, 0x4($v1)
    ctx->pc = 0x253decu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 14));
    // 0x253df0: 0x95ee0006  lhu         $t6, 0x6($t7)
    ctx->pc = 0x253df0u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 6)));
    // 0x253df4: 0xa46e0006  sh          $t6, 0x6($v1)
    ctx->pc = 0x253df4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 14));
    // 0x253df8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253df8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253dfc: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253e00: 0x95ee0008  lhu         $t6, 0x8($t7)
    ctx->pc = 0x253e00u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x253e04: 0xa46e0008  sh          $t6, 0x8($v1)
    ctx->pc = 0x253e04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e08: 0x95ee000a  lhu         $t6, 0xA($t7)
    ctx->pc = 0x253e08u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 10)));
    // 0x253e0c: 0xa46e000a  sh          $t6, 0xA($v1)
    ctx->pc = 0x253e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e10: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253e10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253e14: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253e14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253e18: 0x95ee000c  lhu         $t6, 0xC($t7)
    ctx->pc = 0x253e18u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x253e1c: 0xa46e000c  sh          $t6, 0xC($v1)
    ctx->pc = 0x253e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e20: 0x95ee000e  lhu         $t6, 0xE($t7)
    ctx->pc = 0x253e20u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 14)));
    // 0x253e24: 0xa46e000e  sh          $t6, 0xE($v1)
    ctx->pc = 0x253e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e28: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253e28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253e2c: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253e2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253e30: 0x95ee0010  lhu         $t6, 0x10($t7)
    ctx->pc = 0x253e30u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x253e34: 0xa46e0010  sh          $t6, 0x10($v1)
    ctx->pc = 0x253e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e38: 0x95ee0012  lhu         $t6, 0x12($t7)
    ctx->pc = 0x253e38u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x253e3c: 0xa46e0012  sh          $t6, 0x12($v1)
    ctx->pc = 0x253e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e40: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253e40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253e44: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253e44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253e48: 0x95ee0014  lhu         $t6, 0x14($t7)
    ctx->pc = 0x253e48u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x253e4c: 0xa46e0014  sh          $t6, 0x14($v1)
    ctx->pc = 0x253e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e50: 0x95ee0016  lhu         $t6, 0x16($t7)
    ctx->pc = 0x253e50u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 22)));
    // 0x253e54: 0xa46e0016  sh          $t6, 0x16($v1)
    ctx->pc = 0x253e54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e58: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253e58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253e5c: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253e5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253e60: 0x95ee0018  lhu         $t6, 0x18($t7)
    ctx->pc = 0x253e60u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x253e64: 0xa46e0018  sh          $t6, 0x18($v1)
    ctx->pc = 0x253e64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e68: 0x95ee001a  lhu         $t6, 0x1A($t7)
    ctx->pc = 0x253e68u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 26)));
    // 0x253e6c: 0xa46e001a  sh          $t6, 0x1A($v1)
    ctx->pc = 0x253e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e70: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x253e70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253e74: 0x1ca7821  addu        $t7, $t6, $t2
    ctx->pc = 0x253e74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x253e78: 0x95ee001c  lhu         $t6, 0x1C($t7)
    ctx->pc = 0x253e78u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x253e7c: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x253e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x253e80: 0xa46e001c  sh          $t6, 0x1C($v1)
    ctx->pc = 0x253e80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e84: 0x95ee001e  lhu         $t6, 0x1E($t7)
    ctx->pc = 0x253e84u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 30)));
    // 0x253e88: 0xa46e001e  sh          $t6, 0x1E($v1)
    ctx->pc = 0x253e88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 14));
    // 0x253e8c: 0x15a0ffcc  bnez        $t5, . + 4 + (-0x34 << 2)
    ctx->pc = 0x253E8Cu;
    {
        const bool branch_taken_0x253e8c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x253E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253E8Cu;
            // 0x253e90: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e8c) {
            ctx->pc = 0x253DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253dc0;
        }
    }
    ctx->pc = 0x253E94u;
    // 0x253e94: 0x0  nop
    ctx->pc = 0x253e94u;
    // NOP
label_253e98:
    // 0x253e98: 0x186082a  slt         $at, $t4, $a2
    ctx->pc = 0x253e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x253e9c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x253E9Cu;
    {
        const bool branch_taken_0x253e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253E9Cu;
            // 0x253ea0: 0xc7080  sll         $t6, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253e9c) {
            ctx->pc = 0x253ED8u;
            goto label_253ed8;
        }
    }
    ctx->pc = 0x253EA4u;
    // 0x253ea4: 0x12e6821  addu        $t5, $t1, $t6
    ctx->pc = 0x253ea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
label_253ea8:
    // 0x253ea8: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x253ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253eac: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x253eacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x253eb0: 0x186182a  slt         $v1, $t4, $a2
    ctx->pc = 0x253eb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x253eb4: 0x14e5821  addu        $t3, $t2, $t6
    ctx->pc = 0x253eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x253eb8: 0x956a0000  lhu         $t2, 0x0($t3)
    ctx->pc = 0x253eb8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x253ebc: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x253ebcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x253ec0: 0xa5aa0000  sh          $t2, 0x0($t5)
    ctx->pc = 0x253ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x253ec4: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x253ec4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x253ec8: 0xa5aa0002  sh          $t2, 0x2($t5)
    ctx->pc = 0x253ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x253ecc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x253ECCu;
    {
        const bool branch_taken_0x253ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253ECCu;
            // 0x253ed0: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253ecc) {
            ctx->pc = 0x253EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253ea8;
        }
    }
    ctx->pc = 0x253ED4u;
    // 0x253ed4: 0x0  nop
    ctx->pc = 0x253ed4u;
    // NOP
label_253ed8:
    // 0x253ed8: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x253ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x253edc: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x253ee0: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x253ee0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253ee4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x253ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x253ee8: 0x12a3821  addu        $a3, $t1, $t2
    ctx->pc = 0x253ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x253eec: 0x95230004  lhu         $v1, 0x4($t1)
    ctx->pc = 0x253eecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x253ef0: 0x252b0004  addiu       $t3, $t1, 0x4
    ctx->pc = 0x253ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x253ef4: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x253ef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x253ef8: 0x24e9fffc  addiu       $t1, $a3, -0x4
    ctx->pc = 0x253ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x253efc: 0x1863821  addu        $a3, $t4, $a2
    ctx->pc = 0x253efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x253f00: 0x95460000  lhu         $a2, 0x0($t2)
    ctx->pc = 0x253f00u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x253f04: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x253f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x253f08: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x253F08u;
    {
        const bool branch_taken_0x253f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F08u;
            // 0x253f0c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f08) {
            ctx->pc = 0x253F30u;
            goto label_253f30;
        }
    }
    ctx->pc = 0x253F10u;
label_253f10:
    // 0x253f10: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x253f10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x253f14: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x253f14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x253f18: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x253f18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x253f1c: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x253f1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x253f20: 0x0  nop
    ctx->pc = 0x253f20u;
    // NOP
    // 0x253f24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x253F24u;
    {
        const bool branch_taken_0x253f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x253f24) {
            ctx->pc = 0x253F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253f10;
        }
    }
    ctx->pc = 0x253F2Cu;
    // 0x253f2c: 0x0  nop
    ctx->pc = 0x253f2cu;
    // NOP
label_253f30:
    // 0x253f30: 0x169082b  sltu        $at, $t3, $t1
    ctx->pc = 0x253f30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x253f34: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x253F34u;
    {
        const bool branch_taken_0x253f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F34u;
            // 0x253f38: 0x147082b  sltu        $at, $t2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f34) {
            ctx->pc = 0x254130u;
            goto label_254130;
        }
    }
    ctx->pc = 0x253F3Cu;
    // 0x253f3c: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x253F3Cu;
    {
        const bool branch_taken_0x253f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x253F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F3Cu;
            // 0x253f40: 0x83040  sll         $a2, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f3c) {
            ctx->pc = 0x254130u;
            goto label_254130;
        }
    }
    ctx->pc = 0x253F44u;
    // 0x253f44: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x253f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x253f48: 0x2463f910  addiu       $v1, $v1, -0x6F0
    ctx->pc = 0x253f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    // 0x253f4c: 0x0  nop
    ctx->pc = 0x253f4cu;
    // NOP
label_253f50:
    // 0x253f50: 0x956e0000  lhu         $t6, 0x0($t3)
    ctx->pc = 0x253f50u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x253f54: 0x954d0000  lhu         $t5, 0x0($t2)
    ctx->pc = 0x253f54u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x253f58: 0x1cd082a  slt         $at, $t6, $t5
    ctx->pc = 0x253f58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x253f5c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x253F5Cu;
    {
        const bool branch_taken_0x253f5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x253f5c) {
            ctx->pc = 0x253FD0u;
            goto label_253fd0;
        }
    }
    ctx->pc = 0x253F64u;
    // 0x253f64: 0x956d0000  lhu         $t5, 0x0($t3)
    ctx->pc = 0x253f64u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x253f68: 0xa58d0000  sh          $t5, 0x0($t4)
    ctx->pc = 0x253f68u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x253f6c: 0x956d0002  lhu         $t5, 0x2($t3)
    ctx->pc = 0x253f6cu;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x253f70: 0xa58d0002  sh          $t5, 0x2($t4)
    ctx->pc = 0x253f70u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x253f74: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x253f74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253f78: 0x18d6823  subu        $t5, $t4, $t5
    ctx->pc = 0x253f78u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x253f7c: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x253F7Cu;
    {
        const bool branch_taken_0x253f7c = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x253F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253F7Cu;
            // 0x253f80: 0xdc083  sra         $t8, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253f7c) {
            ctx->pc = 0x253F8Cu;
            goto label_253f8c;
        }
    }
    ctx->pc = 0x253F84u;
    // 0x253f84: 0x25ad0003  addiu       $t5, $t5, 0x3
    ctx->pc = 0x253f84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x253f88: 0xdc083  sra         $t8, $t5, 2
    ctx->pc = 0x253f88u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 13), 2));
label_253f8c:
    // 0x253f8c: 0x958e0000  lhu         $t6, 0x0($t4)
    ctx->pc = 0x253f8cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x253f90: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x253f90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x253f94: 0x958f0002  lhu         $t7, 0x2($t4)
    ctx->pc = 0x253f94u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x253f98: 0x169682b  sltu        $t5, $t3, $t1
    ctx->pc = 0x253f98u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x253f9c: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x253f9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x253fa0: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x253fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x253fa4: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x253fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x253fa8: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x253fa8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x253fac: 0xaf7821  addu        $t7, $a1, $t7
    ctx->pc = 0x253facu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x253fb0: 0x6e7021  addu        $t6, $v1, $t6
    ctx->pc = 0x253fb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x253fb4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x253fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x253fb8: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x253fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x253fbc: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x253fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x253fc0: 0x15a0ffe3  bnez        $t5, . + 4 + (-0x1D << 2)
    ctx->pc = 0x253FC0u;
    {
        const bool branch_taken_0x253fc0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x253FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253FC0u;
            // 0x253fc4: 0xa5d80000  sh          $t8, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fc0) {
            ctx->pc = 0x253F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253f50;
        }
    }
    ctx->pc = 0x253FC8u;
    // 0x253fc8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x253FC8u;
    {
        const bool branch_taken_0x253fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253fc8) {
            ctx->pc = 0x254130u;
            goto label_254130;
        }
    }
    ctx->pc = 0x253FD0u;
label_253fd0:
    // 0x253fd0: 0x954d0000  lhu         $t5, 0x0($t2)
    ctx->pc = 0x253fd0u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x253fd4: 0xa58d0000  sh          $t5, 0x0($t4)
    ctx->pc = 0x253fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x253fd8: 0x954d0002  lhu         $t5, 0x2($t2)
    ctx->pc = 0x253fd8u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x253fdc: 0xa58d0002  sh          $t5, 0x2($t4)
    ctx->pc = 0x253fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x253fe0: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x253fe0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x253fe4: 0x18d6823  subu        $t5, $t4, $t5
    ctx->pc = 0x253fe4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x253fe8: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x253FE8u;
    {
        const bool branch_taken_0x253fe8 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x253FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253FE8u;
            // 0x253fec: 0xdc083  sra         $t8, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253fe8) {
            ctx->pc = 0x253FF8u;
            goto label_253ff8;
        }
    }
    ctx->pc = 0x253FF0u;
    // 0x253ff0: 0x25ad0003  addiu       $t5, $t5, 0x3
    ctx->pc = 0x253ff0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
    // 0x253ff4: 0xdc083  sra         $t8, $t5, 2
    ctx->pc = 0x253ff4u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 13), 2));
label_253ff8:
    // 0x253ff8: 0x958e0000  lhu         $t6, 0x0($t4)
    ctx->pc = 0x253ff8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x253ffc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x253ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x254000: 0x958f0002  lhu         $t7, 0x2($t4)
    ctx->pc = 0x254000u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x254004: 0x147682b  sltu        $t5, $t2, $a3
    ctx->pc = 0x254004u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x254008: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x254008u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x25400c: 0x1c67021  addu        $t6, $t6, $a2
    ctx->pc = 0x25400cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x254010: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x254010u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x254014: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x254014u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x254018: 0xaf7821  addu        $t7, $a1, $t7
    ctx->pc = 0x254018u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x25401c: 0x6e7021  addu        $t6, $v1, $t6
    ctx->pc = 0x25401cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x254020: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x254020u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x254024: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x254024u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x254028: 0x1ee7021  addu        $t6, $t7, $t6
    ctx->pc = 0x254028u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x25402c: 0x15a0ffc8  bnez        $t5, . + 4 + (-0x38 << 2)
    ctx->pc = 0x25402Cu;
    {
        const bool branch_taken_0x25402c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x254030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25402Cu;
            // 0x254030: 0xa5d80000  sh          $t8, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25402c) {
            ctx->pc = 0x253F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_253f50;
        }
    }
    ctx->pc = 0x254034u;
    // 0x254034: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x254034u;
    {
        const bool branch_taken_0x254034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254034) {
            ctx->pc = 0x254130u;
            goto label_254130;
        }
    }
    ctx->pc = 0x25403Cu;
    // 0x25403c: 0x0  nop
    ctx->pc = 0x25403cu;
    // NOP
label_254040:
    // 0x254040: 0x95460000  lhu         $a2, 0x0($t2)
    ctx->pc = 0x254040u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x254044: 0xa5860000  sh          $a2, 0x0($t4)
    ctx->pc = 0x254044u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x254048: 0x95460002  lhu         $a2, 0x2($t2)
    ctx->pc = 0x254048u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x25404c: 0xa5860002  sh          $a2, 0x2($t4)
    ctx->pc = 0x25404cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x254050: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x254050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254054: 0x1863023  subu        $a2, $t4, $a2
    ctx->pc = 0x254054u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x254058: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x254058u;
    {
        const bool branch_taken_0x254058 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x25405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254058u;
            // 0x25405c: 0x67083  sra         $t6, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254058) {
            ctx->pc = 0x254068u;
            goto label_254068;
        }
    }
    ctx->pc = 0x254060u;
    // 0x254060: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x254060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x254064: 0x67083  sra         $t6, $a2, 2
    ctx->pc = 0x254064u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 6), 2));
label_254068:
    // 0x254068: 0x95860000  lhu         $a2, 0x0($t4)
    ctx->pc = 0x254068u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x25406c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x25406cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x254070: 0x958d0002  lhu         $t5, 0x2($t4)
    ctx->pc = 0x254070u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x254074: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x254074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x254078: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x254078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x25407c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x25407cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x254080: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x254080u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x254084: 0xad6821  addu        $t5, $a1, $t5
    ctx->pc = 0x254084u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x254088: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x254088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x25408c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x25408cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x254090: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x254090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x254094: 0x1a63021  addu        $a2, $t5, $a2
    ctx->pc = 0x254094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x254098: 0xa4ce0000  sh          $t6, 0x0($a2)
    ctx->pc = 0x254098u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x25409c: 0x0  nop
    ctx->pc = 0x25409cu;
    // NOP
label_2540a0:
    // 0x2540a0: 0x147302b  sltu        $a2, $t2, $a3
    ctx->pc = 0x2540a0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2540a4: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2540A4u;
    {
        const bool branch_taken_0x2540a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2540A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2540A4u;
            // 0x2540a8: 0x12b082b  sltu        $at, $t1, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540a4) {
            ctx->pc = 0x254040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254040;
        }
    }
    ctx->pc = 0x2540ACu;
    // 0x2540ac: 0x1420001e  bnez        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2540ACu;
    {
        const bool branch_taken_0x2540ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2540ac) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x2540B4u;
    // 0x2540b4: 0x3c070064  lui         $a3, 0x64
    ctx->pc = 0x2540b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)100 << 16));
    // 0x2540b8: 0x24e7f910  addiu       $a3, $a3, -0x6F0
    ctx->pc = 0x2540b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965520));
    // 0x2540bc: 0x0  nop
    ctx->pc = 0x2540bcu;
    // NOP
label_2540c0:
    // 0x2540c0: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x2540c0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2540c4: 0xa5860000  sh          $a2, 0x0($t4)
    ctx->pc = 0x2540c4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2540c8: 0x95660002  lhu         $a2, 0x2($t3)
    ctx->pc = 0x2540c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2540cc: 0xa5860002  sh          $a2, 0x2($t4)
    ctx->pc = 0x2540ccu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2540d0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2540d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2540d4: 0x1863023  subu        $a2, $t4, $a2
    ctx->pc = 0x2540d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x2540d8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2540D8u;
    {
        const bool branch_taken_0x2540d8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2540DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2540D8u;
            // 0x2540dc: 0x65083  sra         $t2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2540d8) {
            ctx->pc = 0x2540E8u;
            goto label_2540e8;
        }
    }
    ctx->pc = 0x2540E0u;
    // 0x2540e0: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x2540e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2540e4: 0x65083  sra         $t2, $a2, 2
    ctx->pc = 0x2540e4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 6), 2));
label_2540e8:
    // 0x2540e8: 0x95860000  lhu         $a2, 0x0($t4)
    ctx->pc = 0x2540e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2540ec: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2540ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x2540f0: 0x95880002  lhu         $t0, 0x2($t4)
    ctx->pc = 0x2540f0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x2540f4: 0x12b082b  sltu        $at, $t1, $t3
    ctx->pc = 0x2540f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x2540f8: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x2540f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2540fc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2540fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x254100: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x254100u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x254104: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x254104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x254108: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x254108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x25410c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x25410cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x254110: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x254110u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x254114: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x254114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x254118: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x254118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x25411c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x25411Cu;
    {
        const bool branch_taken_0x25411c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x254120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25411Cu;
            // 0x254120: 0xa4ca0000  sh          $t2, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25411c) {
            ctx->pc = 0x2540C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2540c0;
        }
    }
    ctx->pc = 0x254124u;
    // 0x254124: 0x0  nop
    ctx->pc = 0x254124u;
    // NOP
label_254128:
    // 0x254128: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x254128u;
    {
        const bool branch_taken_0x254128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254128) {
            ctx->pc = 0x254140u;
            goto label_254140;
        }
    }
    ctx->pc = 0x254130u;
label_254130:
    // 0x254130: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x254130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x254134: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x254134u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
    // 0x254138: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x254138u;
    {
        const bool branch_taken_0x254138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254138u;
            // 0x25413c: 0x2508f910  addiu       $t0, $t0, -0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254138) {
            ctx->pc = 0x2540A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2540a0;
        }
    }
    ctx->pc = 0x254140u;
label_254140:
    // 0x254140: 0x3e00008  jr          $ra
    ctx->pc = 0x254140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254148u;
    // 0x254148: 0x0  nop
    ctx->pc = 0x254148u;
    // NOP
    // 0x25414c: 0x0  nop
    ctx->pc = 0x25414cu;
    // NOP
}
