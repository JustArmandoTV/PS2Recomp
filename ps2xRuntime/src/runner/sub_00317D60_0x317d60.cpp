#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00317D60
// Address: 0x317d60 - 0x317e50
void sub_00317D60_0x317d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317D60_0x317d60");
#endif

    switch (ctx->pc) {
        case 0x317d9cu: goto label_317d9c;
        case 0x317df8u: goto label_317df8;
        default: break;
    }

    ctx->pc = 0x317d60u;

    // 0x317d60: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x317d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x317d64: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x317d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x317d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x317d6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x317d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x317d70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x317d70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317d74: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x317d74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x317d78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317d7c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x317d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x317d80: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x317D80u;
    {
        const bool branch_taken_0x317d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x317D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317D80u;
            // 0x317d84: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317d80) {
            ctx->pc = 0x317DE4u;
            goto label_317de4;
        }
    }
    ctx->pc = 0x317D88u;
    // 0x317d88: 0x94a40012  lhu         $a0, 0x12($a1)
    ctx->pc = 0x317d88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x317d8c: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x317d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x317d90: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x317d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x317d94: 0x94880002  lhu         $t0, 0x2($a0)
    ctx->pc = 0x317d94u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x317d98: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x317d98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_317d9c:
    // 0x317d9c: 0x55040003  bnel        $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317D9Cu;
    {
        const bool branch_taken_0x317d9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x317d9c) {
            ctx->pc = 0x317DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317D9Cu;
            // 0x317da0: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317DACu;
            goto label_317dac;
        }
    }
    ctx->pc = 0x317DA4u;
    // 0x317da4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x317DA4u;
    {
        const bool branch_taken_0x317da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317da4) {
            ctx->pc = 0x317E3Cu;
            goto label_317e3c;
        }
    }
    ctx->pc = 0x317DACu;
label_317dac:
    // 0x317dac: 0x94a60010  lhu         $a2, 0x10($a1)
    ctx->pc = 0x317dacu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x317db0: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x317db0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317db4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317db8: 0x40202a  slt         $a0, $v0, $zero
    ctx->pc = 0x317db8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x317dbc: 0x28c60008  slti        $a2, $a2, 0x8
    ctx->pc = 0x317dbcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x317dc0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x317dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x317dc4: 0xe8382a  slt         $a3, $a3, $t0
    ctx->pc = 0x317dc4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x317dc8: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x317dc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x317dcc: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x317dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x317dd0: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x317dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x317dd4: 0x5480fff1  bnel        $a0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x317DD4u;
    {
        const bool branch_taken_0x317dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x317dd4) {
            ctx->pc = 0x317DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317DD4u;
            // 0x317dd8: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317D9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317d9c;
        }
    }
    ctx->pc = 0x317DDCu;
    // 0x317ddc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x317DDCu;
    {
        const bool branch_taken_0x317ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317ddc) {
            ctx->pc = 0x317E38u;
            goto label_317e38;
        }
    }
    ctx->pc = 0x317DE4u;
label_317de4:
    // 0x317de4: 0x94a40012  lhu         $a0, 0x12($a1)
    ctx->pc = 0x317de4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x317de8: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x317de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x317dec: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x317decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x317df0: 0x94880000  lhu         $t0, 0x0($a0)
    ctx->pc = 0x317df0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x317df4: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x317df4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_317df8:
    // 0x317df8: 0x55040003  bnel        $t0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x317DF8u;
    {
        const bool branch_taken_0x317df8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x317df8) {
            ctx->pc = 0x317DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317DF8u;
            // 0x317dfc: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317E08u;
            goto label_317e08;
        }
    }
    ctx->pc = 0x317E00u;
    // 0x317e00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x317E00u;
    {
        const bool branch_taken_0x317e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317e00) {
            ctx->pc = 0x317E3Cu;
            goto label_317e3c;
        }
    }
    ctx->pc = 0x317E08u;
label_317e08:
    // 0x317e08: 0x94a60010  lhu         $a2, 0x10($a1)
    ctx->pc = 0x317e08u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x317e0c: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x317e0cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317e10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x317e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x317e14: 0x40202a  slt         $a0, $v0, $zero
    ctx->pc = 0x317e14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x317e18: 0x28c60008  slti        $a2, $a2, 0x8
    ctx->pc = 0x317e18u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x317e1c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x317e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x317e20: 0xe8382a  slt         $a3, $a3, $t0
    ctx->pc = 0x317e20u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x317e24: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x317e24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x317e28: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x317e28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x317e2c: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x317e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x317e30: 0x5480fff1  bnel        $a0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x317E30u;
    {
        const bool branch_taken_0x317e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x317e30) {
            ctx->pc = 0x317E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317E30u;
            // 0x317e34: 0x94640002  lhu         $a0, 0x2($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_317df8;
        }
    }
    ctx->pc = 0x317E38u;
label_317e38:
    // 0x317e38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x317e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_317e3c:
    // 0x317e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x317E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317E44u;
    // 0x317e44: 0x0  nop
    ctx->pc = 0x317e44u;
    // NOP
    // 0x317e48: 0x0  nop
    ctx->pc = 0x317e48u;
    // NOP
    // 0x317e4c: 0x0  nop
    ctx->pc = 0x317e4cu;
    // NOP
}
