#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316EA0
// Address: 0x316ea0 - 0x316f30
void sub_00316EA0_0x316ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316EA0_0x316ea0");
#endif

    switch (ctx->pc) {
        case 0x316ec0u: goto label_316ec0;
        default: break;
    }

    ctx->pc = 0x316ea0u;

    // 0x316ea0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x316ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x316ea4: 0xa4a00010  sh          $zero, 0x10($a1)
    ctx->pc = 0x316ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x316ea8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x316ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x316eac: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x316eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x316eb0: 0x2488ffff  addiu       $t0, $a0, -0x1
    ctx->pc = 0x316eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x316eb4: 0x82180  sll         $a0, $t0, 6
    ctx->pc = 0x316eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x316eb8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x316eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x316ebc: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x316ebcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_316ec0:
    // 0x316ec0: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x316EC0u;
    {
        const bool branch_taken_0x316ec0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x316ec0) {
            ctx->pc = 0x316EE8u;
            goto label_316ee8;
        }
    }
    ctx->pc = 0x316EC8u;
    // 0x316ec8: 0xa4a80012  sh          $t0, 0x12($a1)
    ctx->pc = 0x316ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 8));
    // 0x316ecc: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x316eccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x316ed0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x316ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x316ed4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x316ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x316ed8: 0xa4680000  sh          $t0, 0x0($v1)
    ctx->pc = 0x316ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x316edc: 0x94a30010  lhu         $v1, 0x10($a1)
    ctx->pc = 0x316edcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x316ee0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x316ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x316ee4: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x316ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
label_316ee8:
    // 0x316ee8: 0x2529ffc0  addiu       $t1, $t1, -0x40
    ctx->pc = 0x316ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967232));
    // 0x316eec: 0x95270000  lhu         $a3, 0x0($t1)
    ctx->pc = 0x316eecu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x316ef0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x316ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x316ef4: 0x94a40010  lhu         $a0, 0x10($a1)
    ctx->pc = 0x316ef4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x316ef8: 0x100182a  slt         $v1, $t0, $zero
    ctx->pc = 0x316ef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x316efc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x316efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x316f00: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x316f00u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x316f04: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x316f04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x316f08: 0x28840008  slti        $a0, $a0, 0x8
    ctx->pc = 0x316f08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x316f0c: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x316f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x316f10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316f14: 0x5460ffea  bnel        $v1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x316F14u;
    {
        const bool branch_taken_0x316f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x316f14) {
            ctx->pc = 0x316F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316F14u;
            // 0x316f18: 0x95230000  lhu         $v1, 0x0($t1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_316ec0;
        }
    }
    ctx->pc = 0x316F1Cu;
    // 0x316f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x316F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316F24u;
    // 0x316f24: 0x0  nop
    ctx->pc = 0x316f24u;
    // NOP
    // 0x316f28: 0x0  nop
    ctx->pc = 0x316f28u;
    // NOP
    // 0x316f2c: 0x0  nop
    ctx->pc = 0x316f2cu;
    // NOP
}
