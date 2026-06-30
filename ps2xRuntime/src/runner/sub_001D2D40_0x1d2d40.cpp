#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2D40
// Address: 0x1d2d40 - 0x1d2f70
void sub_001D2D40_0x1d2d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D40_0x1d2d40");
#endif

    switch (ctx->pc) {
        case 0x1d2d9cu: goto label_1d2d9c;
        case 0x1d2de8u: goto label_1d2de8;
        case 0x1d2ec8u: goto label_1d2ec8;
        case 0x1d2f08u: goto label_1d2f08;
        default: break;
    }

    ctx->pc = 0x1d2d40u;

    // 0x1d2d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d2d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2d44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d2d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d2d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d2d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d2d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2d54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2d58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d5c: 0x1220007c  beqz        $s1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1D2D5Cu;
    {
        const bool branch_taken_0x1d2d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D5Cu;
            // 0x1d2d60: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d5c) {
            ctx->pc = 0x1D2F50u;
            goto label_1d2f50;
        }
    }
    ctx->pc = 0x1D2D64u;
    // 0x1d2d64: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d2d68: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d2d6c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1d2d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2d70: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d2d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d2d74: 0x54830077  bnel        $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x1D2D74u;
    {
        const bool branch_taken_0x1d2d74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d2d74) {
            ctx->pc = 0x1D2D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D74u;
            // 0x1d2d78: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2F54u;
            goto label_1d2f54;
        }
    }
    ctx->pc = 0x1D2D7Cu;
    // 0x1d2d7c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d2d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d84: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1d2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d2d88: 0x8cd20008  lw          $s2, 0x8($a2)
    ctx->pc = 0x1d2d88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2d8c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1d2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d2d90: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x1d2d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d2d94: 0xc04a508  jal         func_129420
    ctx->pc = 0x1D2D94u;
    SET_GPR_U32(ctx, 31, 0x1D2D9Cu);
    ctx->pc = 0x1D2D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2D94u;
            // 0x1d2d98: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D9Cu; }
        if (ctx->pc != 0x1D2D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2D9Cu; }
        if (ctx->pc != 0x1D2D9Cu) { return; }
    }
    ctx->pc = 0x1D2D9Cu;
label_1d2d9c:
    // 0x1d2d9c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1d2d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d2da0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d2da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2da4: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d2da8: 0x18a00051  blez        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D2DA8u;
    {
        const bool branch_taken_0x1d2da8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D2DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DA8u;
            // 0x1d2dac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2da8) {
            ctx->pc = 0x1D2EF0u;
            goto label_1d2ef0;
        }
    }
    ctx->pc = 0x1D2DB0u;
    // 0x1d2db0: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1d2db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d2db4: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D2DB4u;
    {
        const bool branch_taken_0x1d2db4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DB4u;
            // 0x1d2db8: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2db4) {
            ctx->pc = 0x1D2EB8u;
            goto label_1d2eb8;
        }
    }
    ctx->pc = 0x1D2DBCu;
    // 0x1d2dbc: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2DBCu;
    {
        const bool branch_taken_0x1d2dbc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D2DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2DBCu;
            // 0x1d2dc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dbc) {
            ctx->pc = 0x1D2DDCu;
            goto label_1d2ddc;
        }
    }
    ctx->pc = 0x1D2DC4u;
    // 0x1d2dc4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d2dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d2dc8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d2dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d2dcc: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1d2dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d2dd0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2DD0u;
    {
        const bool branch_taken_0x1d2dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2dd0) {
            ctx->pc = 0x1D2DDCu;
            goto label_1d2ddc;
        }
    }
    ctx->pc = 0x1D2DD8u;
    // 0x1d2dd8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d2dd8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d2ddc:
    // 0x1d2ddc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D2DDCu;
    {
        const bool branch_taken_0x1d2ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ddc) {
            ctx->pc = 0x1D2EB8u;
            goto label_1d2eb8;
        }
    }
    ctx->pc = 0x1D2DE4u;
    // 0x1d2de4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d2de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d2de8:
    // 0x1d2de8: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x1d2de8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d2dec: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1d2decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1d2df0: 0x104482a  slt         $t1, $t0, $a0
    ctx->pc = 0x1d2df0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d2df4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2df4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2df8: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2dfc: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e00: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2e04: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2e08: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x1d2e08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d2e0c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2e0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2e10: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2e10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2e14: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e18: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2e18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2e1c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2e20: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x1d2e20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d2e24: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2e24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2e28: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2e28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2e2c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e30: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2e30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2e34: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2e38: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x1d2e38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d2e3c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2e3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2e40: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2e40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2e44: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e48: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2e4c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2e50: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x1d2e50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1d2e54: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2e54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2e58: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2e58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2e5c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e60: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2e64: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2e68: 0x8cea0014  lw          $t2, 0x14($a3)
    ctx->pc = 0x1d2e68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d2e6c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2e6cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2e70: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2e70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2e74: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e78: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2e78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2e7c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2e80: 0x8cea0018  lw          $t2, 0x18($a3)
    ctx->pc = 0x1d2e80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1d2e84: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2e84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2e88: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2e8c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2e90: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2e94: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d2e98: 0x8cea001c  lw          $t2, 0x1C($a3)
    ctx->pc = 0x1d2e98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1d2e9c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d2e9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d2ea0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1d2ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1d2ea4: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d2ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d2ea8: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d2ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d2eac: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d2eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d2eb0: 0x1520ffcd  bnez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D2EB0u;
    {
        const bool branch_taken_0x1d2eb0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EB0u;
            // 0x1d2eb4: 0xad6a0000  sw          $t2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2eb0) {
            ctx->pc = 0x1D2DE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2de8;
        }
    }
    ctx->pc = 0x1D2EB8u;
label_1d2eb8:
    // 0x1d2eb8: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x1d2eb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d2ebc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D2EBCu;
    {
        const bool branch_taken_0x1d2ebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ebc) {
            ctx->pc = 0x1D2EF0u;
            goto label_1d2ef0;
        }
    }
    ctx->pc = 0x1D2EC4u;
    // 0x1d2ec4: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1d2ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d2ec8:
    // 0x1d2ec8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d2ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d2ecc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d2eccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d2ed0: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x1d2ed0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d2ed4: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x1d2ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x1d2ed8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d2ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d2edc: 0x2044821  addu        $t1, $s0, $a0
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1d2ee0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2ee4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d2ee8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D2EE8u;
    {
        const bool branch_taken_0x1d2ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EE8u;
            // 0x1d2eec: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ee8) {
            ctx->pc = 0x1D2EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2ec8;
        }
    }
    ctx->pc = 0x1D2EF0u;
label_1d2ef0:
    // 0x1d2ef0: 0x1a400017  blez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D2EF0u;
    {
        const bool branch_taken_0x1d2ef0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1D2EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2EF0u;
            // 0x1d2ef4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ef0) {
            ctx->pc = 0x1D2F50u;
            goto label_1d2f50;
        }
    }
    ctx->pc = 0x1D2EF8u;
    // 0x1d2ef8: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d2ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d2efc: 0x3c044d4d  lui         $a0, 0x4D4D
    ctx->pc = 0x1d2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19789 << 16));
    // 0x1d2f00: 0x3465454e  ori         $a1, $v1, 0x454E
    ctx->pc = 0x1d2f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d2f04: 0x3487534e  ori         $a3, $a0, 0x534E
    ctx->pc = 0x1d2f04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21326);
label_1d2f08:
    // 0x1d2f08: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2f0c: 0x14670008  bne         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2F0Cu;
    {
        const bool branch_taken_0x1d2f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1d2f0c) {
            ctx->pc = 0x1D2F30u;
            goto label_1d2f30;
        }
    }
    ctx->pc = 0x1D2F14u;
    // 0x1d2f14: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2F14u;
    {
        const bool branch_taken_0x1d2f14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f14) {
            ctx->pc = 0x1D2F50u;
            goto label_1d2f50;
        }
    }
    ctx->pc = 0x1D2F1Cu;
    // 0x1d2f1c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2f20: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d2f24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d2f28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2F28u;
    {
        const bool branch_taken_0x1d2f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2f28) {
            ctx->pc = 0x1D2F50u;
            goto label_1d2f50;
        }
    }
    ctx->pc = 0x1D2F30u;
label_1d2f30:
    // 0x1d2f30: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2F30u;
    {
        const bool branch_taken_0x1d2f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d2f30) {
            ctx->pc = 0x1D2F50u;
            goto label_1d2f50;
        }
    }
    ctx->pc = 0x1D2F38u;
    // 0x1d2f38: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1d2f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d2f3c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d2f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d2f40: 0x112182a  slt         $v1, $t0, $s2
    ctx->pc = 0x1d2f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d2f44: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d2f48: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D2F48u;
    {
        const bool branch_taken_0x1d2f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F48u;
            // 0x1d2f4c: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f48) {
            ctx->pc = 0x1D2F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2f08;
        }
    }
    ctx->pc = 0x1D2F50u;
label_1d2f50:
    // 0x1d2f50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d2f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2f54:
    // 0x1d2f54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d2f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2f58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F64u;
            // 0x1d2f68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2F6Cu;
    // 0x1d2f6c: 0x0  nop
    ctx->pc = 0x1d2f6cu;
    // NOP
}
