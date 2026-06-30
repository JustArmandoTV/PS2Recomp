#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00470DC0
// Address: 0x470dc0 - 0x471060
void sub_00470DC0_0x470dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470DC0_0x470dc0");
#endif

    switch (ctx->pc) {
        case 0x470e14u: goto label_470e14;
        case 0x470e38u: goto label_470e38;
        case 0x470e90u: goto label_470e90;
        case 0x470f70u: goto label_470f70;
        default: break;
    }

    ctx->pc = 0x470dc0u;

    // 0x470dc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x470dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x470dc4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x470dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x470dc8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x470dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x470dcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x470dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x470dd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x470dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x470dd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x470dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x470dd8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x470dd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x470ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x470de0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x470de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470de4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x470de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x470de8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x470de8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470dec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x470decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x470df0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x470df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470df4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x470df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x470df8: 0x8c440ec8  lw          $a0, 0xEC8($v0)
    ctx->pc = 0x470df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
    // 0x470dfc: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x470dfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x470e00: 0x8c960008  lw          $s6, 0x8($a0)
    ctx->pc = 0x470e00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x470e04: 0x2862003f  slti        $v0, $v1, 0x3F
    ctx->pc = 0x470e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x470e08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x470E08u;
    {
        const bool branch_taken_0x470e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x470E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470E08u;
            // 0x470e0c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470e08) {
            ctx->pc = 0x470E14u;
            goto label_470e14;
        }
    }
    ctx->pc = 0x470E10u;
    // 0x470e10: 0xa2600001  sb          $zero, 0x1($s3)
    ctx->pc = 0x470e10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
label_470e14:
    // 0x470e14: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x470e14u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x470e18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x470e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x470e1c: 0x24421490  addiu       $v0, $v0, 0x1490
    ctx->pc = 0x470e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5264));
    // 0x470e20: 0x26c40018  addiu       $a0, $s6, 0x18
    ctx->pc = 0x470e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x470e24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x470e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x470e28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x470e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x470e2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x470e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x470e30: 0xc0b90e0  jal         func_2E4380
    ctx->pc = 0x470E30u;
    SET_GPR_U32(ctx, 31, 0x470E38u);
    ctx->pc = 0x470E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x470E30u;
            // 0x470e34: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470E38u; }
        if (ctx->pc != 0x470E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4380_0x2e4380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x470E38u; }
        if (ctx->pc != 0x470E38u) { return; }
    }
    ctx->pc = 0x470E38u;
label_470e38:
    // 0x470e38: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x470e38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x470e3c: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x470e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x470e40: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x470E40u;
    {
        const bool branch_taken_0x470e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x470E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470E40u;
            // 0x470e44: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x470e40) {
            ctx->pc = 0x470E68u;
            goto label_470e68;
        }
    }
    ctx->pc = 0x470E48u;
    // 0x470e48: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x470e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x470e4c: 0x8c8489d0  lw          $a0, -0x7630($a0)
    ctx->pc = 0x470e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937040)));
    // 0x470e50: 0x8084008e  lb          $a0, 0x8E($a0)
    ctx->pc = 0x470e50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 142)));
    // 0x470e54: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x470e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x470e58: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x470E58u;
    {
        const bool branch_taken_0x470e58 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x470e58) {
            ctx->pc = 0x470E68u;
            goto label_470e68;
        }
    }
    ctx->pc = 0x470E60u;
    // 0x470e60: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x470e60u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x470e64: 0x0  nop
    ctx->pc = 0x470e64u;
    // NOP
label_470e68:
    // 0x470e68: 0x10a0005b  beqz        $a1, . + 4 + (0x5B << 2)
    ctx->pc = 0x470E68u;
    {
        const bool branch_taken_0x470e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x470e68) {
            ctx->pc = 0x470FD8u;
            goto label_470fd8;
        }
    }
    ctx->pc = 0x470E70u;
    // 0x470e70: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x470e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x470e74: 0x14650016  bne         $v1, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x470E74u;
    {
        const bool branch_taken_0x470e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x470e74) {
            ctx->pc = 0x470ED0u;
            goto label_470ed0;
        }
    }
    ctx->pc = 0x470E7Cu;
    // 0x470e7c: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x470e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x470e80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x470e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470e84: 0x24e70820  addiu       $a3, $a3, 0x820
    ctx->pc = 0x470e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
    // 0x470e88: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x470e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470e8c: 0x0  nop
    ctx->pc = 0x470e8cu;
    // NOP
label_470e90:
    // 0x470e90: 0x90c40070  lbu         $a0, 0x70($a2)
    ctx->pc = 0x470e90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x470e94: 0x28840004  slti        $a0, $a0, 0x4
    ctx->pc = 0x470e94u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x470e98: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x470E98u;
    {
        const bool branch_taken_0x470e98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x470e98) {
            ctx->pc = 0x470EB8u;
            goto label_470eb8;
        }
    }
    ctx->pc = 0x470EA0u;
    // 0x470ea0: 0x12670005  beq         $s3, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x470EA0u;
    {
        const bool branch_taken_0x470ea0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x470ea0) {
            ctx->pc = 0x470EB8u;
            goto label_470eb8;
        }
    }
    ctx->pc = 0x470EA8u;
    // 0x470ea8: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x470ea8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x470eac: 0x1085004a  beq         $a0, $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x470EACu;
    {
        const bool branch_taken_0x470eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x470eac) {
            ctx->pc = 0x470FD8u;
            goto label_470fd8;
        }
    }
    ctx->pc = 0x470EB4u;
    // 0x470eb4: 0x0  nop
    ctx->pc = 0x470eb4u;
    // NOP
label_470eb8:
    // 0x470eb8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x470eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x470ebc: 0x29040004  slti        $a0, $t0, 0x4
    ctx->pc = 0x470ebcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x470ec0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x470ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x470ec4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x470EC4u;
    {
        const bool branch_taken_0x470ec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x470EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470EC4u;
            // 0x470ec8: 0x24c6005c  addiu       $a2, $a2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ec4) {
            ctx->pc = 0x470E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470e90;
        }
    }
    ctx->pc = 0x470ECCu;
    // 0x470ecc: 0x0  nop
    ctx->pc = 0x470eccu;
    // NOP
label_470ed0:
    // 0x470ed0: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x470ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x470ed4: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x470ED4u;
    {
        const bool branch_taken_0x470ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x470ed4) {
            ctx->pc = 0x470F00u;
            goto label_470f00;
        }
    }
    ctx->pc = 0x470EDCu;
    // 0x470edc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x470edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x470ee0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x470EE0u;
    {
        const bool branch_taken_0x470ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x470ee0) {
            ctx->pc = 0x470F00u;
            goto label_470f00;
        }
    }
    ctx->pc = 0x470EE8u;
    // 0x470ee8: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x470ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x470eec: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x470EECu;
    {
        const bool branch_taken_0x470eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x470eec) {
            ctx->pc = 0x470F00u;
            goto label_470f00;
        }
    }
    ctx->pc = 0x470EF4u;
    // 0x470ef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x470EF4u;
    {
        const bool branch_taken_0x470ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470ef4) {
            ctx->pc = 0x470F18u;
            goto label_470f18;
        }
    }
    ctx->pc = 0x470EFCu;
    // 0x470efc: 0x0  nop
    ctx->pc = 0x470efcu;
    // NOP
label_470f00:
    // 0x470f00: 0x8ea50068  lw          $a1, 0x68($s5)
    ctx->pc = 0x470f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x470f04: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x470f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x470f08: 0x80a5008c  lb          $a1, 0x8C($a1)
    ctx->pc = 0x470f08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x470f0c: 0x10a40032  beq         $a1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x470F0Cu;
    {
        const bool branch_taken_0x470f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x470f0c) {
            ctx->pc = 0x470FD8u;
            goto label_470fd8;
        }
    }
    ctx->pc = 0x470F14u;
    // 0x470f14: 0x0  nop
    ctx->pc = 0x470f14u;
    // NOP
label_470f18:
    // 0x470f18: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x470F18u;
    {
        const bool branch_taken_0x470f18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x470f18) {
            ctx->pc = 0x470F48u;
            goto label_470f48;
        }
    }
    ctx->pc = 0x470F20u;
    // 0x470f20: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x470f20u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x470f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x470f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x470f28: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x470f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x470f2c: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x470f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x470f30: 0xc52804  sllv        $a1, $a1, $a2
    ctx->pc = 0x470f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x470f34: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x470f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x470f38: 0x1480003d  bnez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x470F38u;
    {
        const bool branch_taken_0x470f38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x470f38) {
            ctx->pc = 0x471030u;
            goto label_471030;
        }
    }
    ctx->pc = 0x470F40u;
    // 0x470f40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x470F40u;
    {
        const bool branch_taken_0x470f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f40) {
            ctx->pc = 0x470FD8u;
            goto label_470fd8;
        }
    }
    ctx->pc = 0x470F48u;
label_470f48:
    // 0x470f48: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x470f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x470f4c: 0x10640022  beq         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x470F4Cu;
    {
        const bool branch_taken_0x470f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x470f4c) {
            ctx->pc = 0x470FD8u;
            goto label_470fd8;
        }
    }
    ctx->pc = 0x470F54u;
    // 0x470f54: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x470f54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470f58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x470f58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470f5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x470f5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470f60: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x470f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470f64: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x470f64u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x470f68: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x470f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x470f6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x470f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470f70:
    // 0x470f70: 0x15800017  bnez        $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x470F70u;
    {
        const bool branch_taken_0x470f70 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x470f70) {
            ctx->pc = 0x470FD0u;
            goto label_470fd0;
        }
    }
    ctx->pc = 0x470F78u;
    // 0x470f78: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x470f78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x470f7c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x470f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x470f80: 0x14880003  bne         $a0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x470F80u;
    {
        const bool branch_taken_0x470f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x470f80) {
            ctx->pc = 0x470F90u;
            goto label_470f90;
        }
    }
    ctx->pc = 0x470F88u;
    // 0x470f88: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x470f88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x470f8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x470f8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470f90:
    // 0x470f90: 0x862804  sllv        $a1, $a2, $a0
    ctx->pc = 0x470f90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x470f94: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x470f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x470f98: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x470f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x470f9c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x470F9Cu;
    {
        const bool branch_taken_0x470f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f9c) {
            ctx->pc = 0x470FC0u;
            goto label_470fc0;
        }
    }
    ctx->pc = 0x470FA4u;
    // 0x470fa4: 0x11800004  beqz        $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x470FA4u;
    {
        const bool branch_taken_0x470fa4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x470fa4) {
            ctx->pc = 0x470FB8u;
            goto label_470fb8;
        }
    }
    ctx->pc = 0x470FACu;
    // 0x470fac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x470FACu;
    {
        const bool branch_taken_0x470fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470FACu;
            // 0x470fb0: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470fac) {
            ctx->pc = 0x470FD0u;
            goto label_470fd0;
        }
    }
    ctx->pc = 0x470FB4u;
    // 0x470fb4: 0x0  nop
    ctx->pc = 0x470fb4u;
    // NOP
label_470fb8:
    // 0x470fb8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x470fb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x470fbc: 0x0  nop
    ctx->pc = 0x470fbcu;
    // NOP
label_470fc0:
    // 0x470fc0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x470fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x470fc4: 0x152202b  sltu        $a0, $t2, $s2
    ctx->pc = 0x470fc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x470fc8: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x470FC8u;
    {
        const bool branch_taken_0x470fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x470FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470FC8u;
            // 0x470fcc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470fc8) {
            ctx->pc = 0x470F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470f70;
        }
    }
    ctx->pc = 0x470FD0u;
label_470fd0:
    // 0x470fd0: 0x15600017  bnez        $t3, . + 4 + (0x17 << 2)
    ctx->pc = 0x470FD0u;
    {
        const bool branch_taken_0x470fd0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x470fd0) {
            ctx->pc = 0x471030u;
            goto label_471030;
        }
    }
    ctx->pc = 0x470FD8u;
label_470fd8:
    // 0x470fd8: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x470FD8u;
    {
        const bool branch_taken_0x470fd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x470fd8) {
            ctx->pc = 0x471008u;
            goto label_471008;
        }
    }
    ctx->pc = 0x470FE0u;
    // 0x470fe0: 0x2861003e  slti        $at, $v1, 0x3E
    ctx->pc = 0x470fe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)62) ? 1 : 0);
    // 0x470fe4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x470FE4u;
    {
        const bool branch_taken_0x470fe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x470fe4) {
            ctx->pc = 0x471000u;
            goto label_471000;
        }
    }
    ctx->pc = 0x470FECu;
    // 0x470fec: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x470fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x470ff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x470ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x470ff4: 0x1000ff87  b           . + 4 + (-0x79 << 2)
    ctx->pc = 0x470FF4u;
    {
        const bool branch_taken_0x470ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x470FF4u;
            // 0x470ff8: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ff4) {
            ctx->pc = 0x470E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470e14;
        }
    }
    ctx->pc = 0x470FFCu;
    // 0x470ffc: 0x0  nop
    ctx->pc = 0x470ffcu;
    // NOP
label_471000:
    // 0x471000: 0x1000ff84  b           . + 4 + (-0x7C << 2)
    ctx->pc = 0x471000u;
    {
        const bool branch_taken_0x471000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471000u;
            // 0x471004: 0xa2600001  sb          $zero, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471000) {
            ctx->pc = 0x470E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470e14;
        }
    }
    ctx->pc = 0x471008u;
label_471008:
    // 0x471008: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x471008u;
    {
        const bool branch_taken_0x471008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x471008) {
            ctx->pc = 0x471020u;
            goto label_471020;
        }
    }
    ctx->pc = 0x471010u;
    // 0x471010: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x471010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x471014: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x471014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x471018: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x471018u;
    {
        const bool branch_taken_0x471018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471018u;
            // 0x47101c: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471018) {
            ctx->pc = 0x470E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470e14;
        }
    }
    ctx->pc = 0x471020u;
label_471020:
    // 0x471020: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x471020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x471024: 0x1000ff7b  b           . + 4 + (-0x85 << 2)
    ctx->pc = 0x471024u;
    {
        const bool branch_taken_0x471024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471024u;
            // 0x471028: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471024) {
            ctx->pc = 0x470E14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_470e14;
        }
    }
    ctx->pc = 0x47102Cu;
    // 0x47102c: 0x0  nop
    ctx->pc = 0x47102cu;
    // NOP
label_471030:
    // 0x471030: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x471030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x471034: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x471034u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x471038: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x471038u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47103c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47103cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x471040: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x471040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x471044: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x471044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x471048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x471048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47104c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47104cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x471050: 0x3e00008  jr          $ra
    ctx->pc = 0x471050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x471050u;
            // 0x471054: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x471058u;
    // 0x471058: 0x0  nop
    ctx->pc = 0x471058u;
    // NOP
    // 0x47105c: 0x0  nop
    ctx->pc = 0x47105cu;
    // NOP
}
