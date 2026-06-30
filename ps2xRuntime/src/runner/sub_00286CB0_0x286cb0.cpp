#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286CB0
// Address: 0x286cb0 - 0x2872b0
void sub_00286CB0_0x286cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286CB0_0x286cb0");
#endif

    switch (ctx->pc) {
        case 0x286df8u: goto label_286df8;
        case 0x286e28u: goto label_286e28;
        case 0x286e68u: goto label_286e68;
        case 0x286e9cu: goto label_286e9c;
        case 0x287048u: goto label_287048;
        case 0x287094u: goto label_287094;
        case 0x287128u: goto label_287128;
        case 0x2871a0u: goto label_2871a0;
        case 0x287208u: goto label_287208;
        case 0x287228u: goto label_287228;
        case 0x287248u: goto label_287248;
        default: break;
    }

    ctx->pc = 0x286cb0u;

    // 0x286cb0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x286cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x286cb4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x286cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x286cb8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x286cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x286cbc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x286cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x286cc0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x286cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x286cc4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x286cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x286cc8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x286cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x286ccc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x286cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cd0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x286cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x286cd4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x286cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cd8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x286cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x286cdc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x286cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x286ce0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x286ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x286ce4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x286ce4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x286ce8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x286ce8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x286cec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x286cecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x286cf0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x286cf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x286cf4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x286cf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x286cf8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x286cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x286cfc: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x286cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x286d00: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x286d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x286d04: 0x10200154  beqz        $at, . + 4 + (0x154 << 2)
    ctx->pc = 0x286D04u;
    {
        const bool branch_taken_0x286d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D04u;
            // 0x286d08: 0x46006606  mov.s       $f24, $f12 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d04) {
            ctx->pc = 0x287258u;
            goto label_287258;
        }
    }
    ctx->pc = 0x286D0Cu;
    // 0x286d0c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x286d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x286d10: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x286d10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x286d14: 0x10200150  beqz        $at, . + 4 + (0x150 << 2)
    ctx->pc = 0x286D14u;
    {
        const bool branch_taken_0x286d14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D14u;
            // 0x286d18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d14) {
            ctx->pc = 0x287258u;
            goto label_287258;
        }
    }
    ctx->pc = 0x286D1Cu;
    // 0x286d1c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x286d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x286d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x286d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286d24: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x286D24u;
    {
        const bool branch_taken_0x286d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D24u;
            // 0x286d28: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d24) {
            ctx->pc = 0x286DA0u;
            goto label_286da0;
        }
    }
    ctx->pc = 0x286D2Cu;
    // 0x286d2c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x286d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x286d30: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x286d30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x286d34: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x286d34u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x286d38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x286d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x286d3c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x286d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x286d40: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x286d40u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286d44: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x286d44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x286d48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x286D48u;
    {
        const bool branch_taken_0x286d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D48u;
            // 0x286d4c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d48) {
            ctx->pc = 0x286D58u;
            goto label_286d58;
        }
    }
    ctx->pc = 0x286D50u;
    // 0x286d50: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x286d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d54: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x286d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286d58:
    // 0x286d58: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x286d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x286d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286d60: 0x14820029  bne         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x286D60u;
    {
        const bool branch_taken_0x286d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x286D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D60u;
            // 0x286d64: 0x94700000  lhu         $s0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d60) {
            ctx->pc = 0x286E08u;
            goto label_286e08;
        }
    }
    ctx->pc = 0x286D68u;
    // 0x286d68: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x286d68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x286d6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x286d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x286d70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x286d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286d74: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x286d74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286d78: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x286d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286d7c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x286D7Cu;
    {
        const bool branch_taken_0x286d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D7Cu;
            // 0x286d80: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d7c) {
            ctx->pc = 0x286D90u;
            goto label_286d90;
        }
    }
    ctx->pc = 0x286D84u;
    // 0x286d84: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x286d84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d8c: 0x0  nop
    ctx->pc = 0x286d8cu;
    // NOP
label_286d90:
    // 0x286d90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x286d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286d94: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x286D94u;
    {
        const bool branch_taken_0x286d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286D94u;
            // 0x286d98: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d94) {
            ctx->pc = 0x286E08u;
            goto label_286e08;
        }
    }
    ctx->pc = 0x286D9Cu;
    // 0x286d9c: 0x0  nop
    ctx->pc = 0x286d9cu;
    // NOP
label_286da0:
    // 0x286da0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x286DA0u;
    {
        const bool branch_taken_0x286da0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x286da0) {
            ctx->pc = 0x286DE0u;
            goto label_286de0;
        }
    }
    ctx->pc = 0x286DA8u;
    // 0x286da8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x286da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x286dac: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x286dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x286db0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x286db0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286db4: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x286db4u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x286db8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x286db8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x286dbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x286dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x286dc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x286dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x286dc4: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x286dc4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286dc8: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x286dc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x286dcc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x286DCCu;
    {
        const bool branch_taken_0x286dcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DCCu;
            // 0x286dd0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dcc) {
            ctx->pc = 0x286E08u;
            goto label_286e08;
        }
    }
    ctx->pc = 0x286DD4u;
    // 0x286dd4: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x286dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286dd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x286DD8u;
    {
        const bool branch_taken_0x286dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DD8u;
            // 0x286ddc: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dd8) {
            ctx->pc = 0x286E08u;
            goto label_286e08;
        }
    }
    ctx->pc = 0x286DE0u;
label_286de0:
    // 0x286de0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x286de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x286de4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x286de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x286de8: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x286de8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286dec: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x286decu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286df0: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x286DF0u;
    SET_GPR_U32(ctx, 31, 0x286DF8u);
    ctx->pc = 0x286DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286DF0u;
            // 0x286df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DF8u; }
        if (ctx->pc != 0x286DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286DF8u; }
        if (ctx->pc != 0x286DF8u) { return; }
    }
    ctx->pc = 0x286DF8u;
label_286df8:
    // 0x286df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286dfc: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x286DFCu;
    {
        const bool branch_taken_0x286dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286DFCu;
            // 0x286e00: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286dfc) {
            ctx->pc = 0x287268u;
            goto label_287268;
        }
    }
    ctx->pc = 0x286E04u;
    // 0x286e04: 0x0  nop
    ctx->pc = 0x286e04u;
    // NOP
label_286e08:
    // 0x286e08: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x286e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x286e0c: 0x262f021  addu        $fp, $s3, $v0
    ctx->pc = 0x286e0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x286e10: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x286e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x286e14: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x286e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x286e18: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x286e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e1c: 0x262b821  addu        $s7, $s3, $v0
    ctx->pc = 0x286e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x286e20: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x286E20u;
    SET_GPR_U32(ctx, 31, 0x286E28u);
    ctx->pc = 0x286E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286E20u;
            // 0x286e24: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E28u; }
        if (ctx->pc != 0x286E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E28u; }
        if (ctx->pc != 0x286E28u) { return; }
    }
    ctx->pc = 0x286E28u;
label_286e28:
    // 0x286e28: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x286e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x286e2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x286e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286e34: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x286e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x286e38: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x286e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286e3c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x286e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x286e40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x286e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x286e44: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x286e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x286e48: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x286e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x286e4c: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x286e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x286e50: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x286e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286e54: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286e54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x286e58: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x286e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286e5c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286e5cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286e60: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x286E60u;
    SET_GPR_U32(ctx, 31, 0x286E68u);
    ctx->pc = 0x286E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286E60u;
            // 0x286e64: 0x4602159c  madd.s      $f22, $f2, $f2 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E68u; }
        if (ctx->pc != 0x286E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E68u; }
        if (ctx->pc != 0x286E68u) { return; }
    }
    ctx->pc = 0x286E68u;
label_286e68:
    // 0x286e68: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x286e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x286e6c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x286e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286e70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286e74: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x286e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286e78: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x286e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286e7c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x286e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x286e80: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x286e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x286e84: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x286e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286e88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x286e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x286e8c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x286e8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x286e90: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286e90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286e94: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x286E94u;
    SET_GPR_U32(ctx, 31, 0x286E9Cu);
    ctx->pc = 0x286E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286E94u;
            // 0x286e98: 0x4602155c  madd.s      $f21, $f2, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E9Cu; }
        if (ctx->pc != 0x286E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286E9Cu; }
        if (ctx->pc != 0x286E9Cu) { return; }
    }
    ctx->pc = 0x286E9Cu;
label_286e9c:
    // 0x286e9c: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x286e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x286ea0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286ea4: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x286ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286ea8: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x286ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286eac: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x286eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x286eb0: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x286eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x286eb4: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x286eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x286eb8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x286eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x286ebc: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x286ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x286ec0: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x286ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x286ec4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x286ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x286ec8: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x286ec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x286ecc: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x286eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x286ed0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x286ed0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x286ed4: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x286ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x286ed8: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x286ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x286edc: 0x46052ddc  madd.s      $f23, $f5, $f5
    ctx->pc = 0x286edcu;
    ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x286ee0: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286ee0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286ee4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x286ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x286ee8: 0x46070832  c.eq.s      $f1, $f7
    ctx->pc = 0x286ee8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286eec: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x286EECu;
    {
        const bool branch_taken_0x286eec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286EECu;
            // 0x286ef0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286eec) {
            ctx->pc = 0x286F10u;
            goto label_286f10;
        }
    }
    ctx->pc = 0x286EF4u;
    // 0x286ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286ef8: 0x0  nop
    ctx->pc = 0x286ef8u;
    // NOP
    // 0x286efc: 0x460101d6  rsqrt.s     $f7, $f0, $f1
    ctx->pc = 0x286efcu;
    ctx->f[7] = 1.0f / sqrtf(ctx->f[0]);
    // 0x286f00: 0x0  nop
    ctx->pc = 0x286f00u;
    // NOP
    // 0x286f04: 0x0  nop
    ctx->pc = 0x286f04u;
    // NOP
    // 0x286f08: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x286F08u;
    {
        const bool branch_taken_0x286f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f08) {
            ctx->pc = 0x286F10u;
            goto label_286f10;
        }
    }
    ctx->pc = 0x286F10u;
label_286f10:
    // 0x286f10: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x286f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x286f14: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x286f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286f18: 0xc7a30134  lwc1        $f3, 0x134($sp)
    ctx->pc = 0x286f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286f1c: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x286f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286f20: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x286f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286f24: 0xc7a50120  lwc1        $f5, 0x120($sp)
    ctx->pc = 0x286f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x286f28: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x286f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x286f2c: 0x0  nop
    ctx->pc = 0x286f2cu;
    // NOP
    // 0x286f30: 0x46070902  mul.s       $f4, $f1, $f7
    ctx->pc = 0x286f30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x286f34: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x286f34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x286f38: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x286f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x286f3c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x286f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x286f40: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x286f40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x286f44: 0xe7a30134  swc1        $f3, 0x134($sp)
    ctx->pc = 0x286f44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x286f48: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x286f48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x286f4c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x286f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x286f50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286f54: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x286f54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x286f58: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x286f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x286f5c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x286f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x286f60: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x286f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x286f64: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x286f64u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286f68: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x286f68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x286f6c: 0x46060832  c.eq.s      $f1, $f6
    ctx->pc = 0x286f6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286f70: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x286F70u;
    {
        const bool branch_taken_0x286f70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286F70u;
            // 0x286f74: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286f70) {
            ctx->pc = 0x286F98u;
            goto label_286f98;
        }
    }
    ctx->pc = 0x286F78u;
    // 0x286f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286f7c: 0x0  nop
    ctx->pc = 0x286f7cu;
    // NOP
    // 0x286f80: 0x46010196  rsqrt.s     $f6, $f0, $f1
    ctx->pc = 0x286f80u;
    ctx->f[6] = 1.0f / sqrtf(ctx->f[0]);
    // 0x286f84: 0x0  nop
    ctx->pc = 0x286f84u;
    // NOP
    // 0x286f88: 0x0  nop
    ctx->pc = 0x286f88u;
    // NOP
    // 0x286f8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286F8Cu;
    {
        const bool branch_taken_0x286f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286f8c) {
            ctx->pc = 0x286F98u;
            goto label_286f98;
        }
    }
    ctx->pc = 0x286F94u;
    // 0x286f94: 0x0  nop
    ctx->pc = 0x286f94u;
    // NOP
label_286f98:
    // 0x286f98: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x286f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x286f9c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x286f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fa0: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x286fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x286fa4: 0x0  nop
    ctx->pc = 0x286fa4u;
    // NOP
    // 0x286fa8: 0x4604b832  c.eq.s      $f23, $f4
    ctx->pc = 0x286fa8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x286fac: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x286facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x286fb0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x286fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x286fb4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fb8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x286fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x286fbc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x286fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x286fc0: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x286fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x286fc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fc8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x286fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x286fcc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x286fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x286fd0: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x286fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x286fd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x286fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286fd8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x286fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x286fdc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x286FDCu;
    {
        const bool branch_taken_0x286fdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x286FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286FDCu;
            // 0x286fe0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286fdc) {
            ctx->pc = 0x287008u;
            goto label_287008;
        }
    }
    ctx->pc = 0x286FE4u;
    // 0x286fe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x286fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x286fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286fec: 0x0  nop
    ctx->pc = 0x286fecu;
    // NOP
    // 0x286ff0: 0x46170116  rsqrt.s     $f4, $f0, $f23
    ctx->pc = 0x286ff0u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
    // 0x286ff4: 0x0  nop
    ctx->pc = 0x286ff4u;
    // NOP
    // 0x286ff8: 0x0  nop
    ctx->pc = 0x286ff8u;
    // NOP
    // 0x286ffc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286FFCu;
    {
        const bool branch_taken_0x286ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286ffc) {
            ctx->pc = 0x287008u;
            goto label_287008;
        }
    }
    ctx->pc = 0x287004u;
    // 0x287004: 0x0  nop
    ctx->pc = 0x287004u;
    // NOP
label_287008:
    // 0x287008: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x287008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x28700c: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x28700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287010: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x287010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x287014: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x287014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287018: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x287018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28701c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x28701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287020: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x287020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287024: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x287024u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x287028: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x287028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28702c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28702cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287030: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287034: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x287034u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x287038: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x287038u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x28703c: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x28703cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x287040: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x287040u;
    SET_GPR_U32(ctx, 31, 0x287048u);
    ctx->pc = 0x287044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287040u;
            // 0x287044: 0xe7a0011c  swc1        $f0, 0x11C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287048u; }
        if (ctx->pc != 0x287048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287048u; }
        if (ctx->pc != 0x287048u) { return; }
    }
    ctx->pc = 0x287048u;
label_287048:
    // 0x287048: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x287048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28704c: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x28704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287050: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x287050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287054: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287058: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28705c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x28705cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287060: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x287060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x287064: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x287064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287068: 0x45000079  bc1f        . + 4 + (0x79 << 2)
    ctx->pc = 0x287068u;
    {
        const bool branch_taken_0x287068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287068) {
            ctx->pc = 0x287250u;
            goto label_287250;
        }
    }
    ctx->pc = 0x287070u;
    // 0x287070: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x287070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x287074: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x287074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x287078: 0x14640055  bne         $v1, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x287078u;
    {
        const bool branch_taken_0x287078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x28707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287078u;
            // 0x28707c: 0x161100  sll         $v0, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287078) {
            ctx->pc = 0x2871D0u;
            goto label_2871d0;
        }
    }
    ctx->pc = 0x287080u;
    // 0x287080: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x287080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287084: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x287084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x287088: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x287088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x28708c: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x28708Cu;
    SET_GPR_U32(ctx, 31, 0x287094u);
    ctx->pc = 0x287090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28708Cu;
            // 0x287090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287094u; }
        if (ctx->pc != 0x287094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287094u; }
        if (ctx->pc != 0x287094u) { return; }
    }
    ctx->pc = 0x287094u;
label_287094:
    // 0x287094: 0x27b700f4  addiu       $s7, $sp, 0xF4
    ctx->pc = 0x287094u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x287098: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x287098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x28709c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x28709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2870a0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2870a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2870a4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2870a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2870a8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2870a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2870ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2870acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2870b0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2870b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2870b4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2870b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2870b8: 0x4602151c  madd.s      $f20, $f2, $f2
    ctx->pc = 0x2870b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2870bc: 0x4604a032  c.eq.s      $f20, $f4
    ctx->pc = 0x2870bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2870c0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2870C0u;
    {
        const bool branch_taken_0x2870c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2870C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2870C0u;
            // 0x2870c4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2870c0) {
            ctx->pc = 0x2870E8u;
            goto label_2870e8;
        }
    }
    ctx->pc = 0x2870C8u;
    // 0x2870c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2870c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2870cc: 0x0  nop
    ctx->pc = 0x2870ccu;
    // NOP
    // 0x2870d0: 0x46140116  rsqrt.s     $f4, $f0, $f20
    ctx->pc = 0x2870d0u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2870d4: 0x0  nop
    ctx->pc = 0x2870d4u;
    // NOP
    // 0x2870d8: 0x0  nop
    ctx->pc = 0x2870d8u;
    // NOP
    // 0x2870dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2870DCu;
    {
        const bool branch_taken_0x2870dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2870dc) {
            ctx->pc = 0x2870E8u;
            goto label_2870e8;
        }
    }
    ctx->pc = 0x2870E4u;
    // 0x2870e4: 0x0  nop
    ctx->pc = 0x2870e4u;
    // NOP
label_2870e8:
    // 0x2870e8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2870e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2870ec: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x2870ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2870f0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2870f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2870f4: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2870f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2870f8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2870f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2870fc: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2870fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287100: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x287100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287104: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x287104u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x287108: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x287108u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x28710c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x28710cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x287110: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x287110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x287114: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x287114u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x287118: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x287118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x28711c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x28711cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x287120: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x287120u;
    SET_GPR_U32(ctx, 31, 0x287128u);
    ctx->pc = 0x287124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287120u;
            // 0x287124: 0xe7a000fc  swc1        $f0, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287128u; }
        if (ctx->pc != 0x287128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287128u; }
        if (ctx->pc != 0x287128u) { return; }
    }
    ctx->pc = 0x287128u;
label_287128:
    // 0x287128: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x287128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28712c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x28712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287130: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x287130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287134: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x287134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x287138: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x287138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x28713c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x28713cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x287140: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x287140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x287144: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x287144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287148: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x287148u;
    {
        const bool branch_taken_0x287148 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x287148) {
            ctx->pc = 0x2871C8u;
            goto label_2871c8;
        }
    }
    ctx->pc = 0x287150u;
    // 0x287150: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x287150u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287154: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x287154u;
    {
        const bool branch_taken_0x287154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x287154) {
            ctx->pc = 0x2871D0u;
            goto label_2871d0;
        }
    }
    ctx->pc = 0x28715Cu;
    // 0x28715c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x28715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287160: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x287160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x287164: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x287164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287168: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x287168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28716c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x28716cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x287170: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x287170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287174: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x287174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x287178: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x287178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28717c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28717cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x287180: 0x27a200f8  addiu       $v0, $sp, 0xF8
    ctx->pc = 0x287180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x287184: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x287184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287188: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x287188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x28718c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28718cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x287190: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x287190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287194: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x287198: 0xc0a2984  jal         func_28A610
    ctx->pc = 0x287198u;
    SET_GPR_U32(ctx, 31, 0x2871A0u);
    ctx->pc = 0x28719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287198u;
            // 0x28719c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A610u;
    if (runtime->hasFunction(0x28A610u)) {
        auto targetFn = runtime->lookupFunction(0x28A610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2871A0u; }
        if (ctx->pc != 0x2871A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A610_0x28a610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2871A0u; }
        if (ctx->pc != 0x2871A0u) { return; }
    }
    ctx->pc = 0x2871A0u;
label_2871a0:
    // 0x2871a0: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x2871a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2871a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2871a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2871a8: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x2871a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2871ac: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x2871acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x2871b0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2871b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2871b4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2871b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2871b8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2871b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2871bc: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x2871bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2871c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2871C0u;
    {
        const bool branch_taken_0x2871c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2871C0u;
            // 0x2871c4: 0x460215dc  madd.s      $f23, $f2, $f2 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871c0) {
            ctx->pc = 0x2871D0u;
            goto label_2871d0;
        }
    }
    ctx->pc = 0x2871C8u;
label_2871c8:
    // 0x2871c8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2871C8u;
    {
        const bool branch_taken_0x2871c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2871C8u;
            // 0x2871cc: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871c8) {
            ctx->pc = 0x287268u;
            goto label_287268;
        }
    }
    ctx->pc = 0x2871D0u;
label_2871d0:
    // 0x2871d0: 0x4617a836  c.le.s      $f21, $f23
    ctx->pc = 0x2871d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2871d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2871D4u;
    {
        const bool branch_taken_0x2871d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2871D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2871D4u;
            // 0x2871d8: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871d4) {
            ctx->pc = 0x2871E0u;
            goto label_2871e0;
        }
    }
    ctx->pc = 0x2871DCu;
    // 0x2871dc: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x2871dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_2871e0:
    // 0x2871e0: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x2871e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2871e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2871E4u;
    {
        const bool branch_taken_0x2871e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2871e4) {
            ctx->pc = 0x2871F0u;
            goto label_2871f0;
        }
    }
    ctx->pc = 0x2871ECu;
    // 0x2871ec: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x2871ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_2871f0:
    // 0x2871f0: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x2871f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2871f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2871F4u;
    {
        const bool branch_taken_0x2871f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2871F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2871F4u;
            // 0x2871f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871f4) {
            ctx->pc = 0x287210u;
            goto label_287210;
        }
    }
    ctx->pc = 0x2871FCu;
    // 0x2871fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2871fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287200: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x287200u;
    SET_GPR_U32(ctx, 31, 0x287208u);
    ctx->pc = 0x287204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287200u;
            // 0x287204: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287208u; }
        if (ctx->pc != 0x287208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287208u; }
        if (ctx->pc != 0x287208u) { return; }
    }
    ctx->pc = 0x287208u;
label_287208:
    // 0x287208: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x287208u;
    {
        const bool branch_taken_0x287208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287208) {
            ctx->pc = 0x287260u;
            goto label_287260;
        }
    }
    ctx->pc = 0x287210u;
label_287210:
    // 0x287210: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x287210u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287214: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x287214u;
    {
        const bool branch_taken_0x287214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287214u;
            // 0x287218: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287214) {
            ctx->pc = 0x287230u;
            goto label_287230;
        }
    }
    ctx->pc = 0x28721Cu;
    // 0x28721c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287220: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x287220u;
    SET_GPR_U32(ctx, 31, 0x287228u);
    ctx->pc = 0x287224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287220u;
            // 0x287224: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287228u; }
        if (ctx->pc != 0x287228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287228u; }
        if (ctx->pc != 0x287228u) { return; }
    }
    ctx->pc = 0x287228u;
label_287228:
    // 0x287228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x287228u;
    {
        const bool branch_taken_0x287228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287228) {
            ctx->pc = 0x287260u;
            goto label_287260;
        }
    }
    ctx->pc = 0x287230u;
label_287230:
    // 0x287230: 0x4600b832  c.eq.s      $f23, $f0
    ctx->pc = 0x287230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287234: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x287234u;
    {
        const bool branch_taken_0x287234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287234u;
            // 0x287238: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287234) {
            ctx->pc = 0x287260u;
            goto label_287260;
        }
    }
    ctx->pc = 0x28723Cu;
    // 0x28723c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28723cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287240: 0xc0a2f1c  jal         func_28BC70
    ctx->pc = 0x287240u;
    SET_GPR_U32(ctx, 31, 0x287248u);
    ctx->pc = 0x287244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287240u;
            // 0x287244: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BC70u;
    if (runtime->hasFunction(0x28BC70u)) {
        auto targetFn = runtime->lookupFunction(0x28BC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287248u; }
        if (ctx->pc != 0x287248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BC70_0x28bc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287248u; }
        if (ctx->pc != 0x287248u) { return; }
    }
    ctx->pc = 0x287248u;
label_287248:
    // 0x287248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x287248u;
    {
        const bool branch_taken_0x287248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x287248) {
            ctx->pc = 0x287260u;
            goto label_287260;
        }
    }
    ctx->pc = 0x287250u;
label_287250:
    // 0x287250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x287250u;
    {
        const bool branch_taken_0x287250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287250u;
            // 0x287254: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287250) {
            ctx->pc = 0x287268u;
            goto label_287268;
        }
    }
    ctx->pc = 0x287258u;
label_287258:
    // 0x287258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x287258u;
    {
        const bool branch_taken_0x287258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28725Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287258u;
            // 0x28725c: 0xa2a00000  sb          $zero, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287258) {
            ctx->pc = 0x287268u;
            goto label_287268;
        }
    }
    ctx->pc = 0x287260u;
label_287260:
    // 0x287260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x287260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287264: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x287264u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_287268:
    // 0x287268: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x287268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28726c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x28726cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x287270: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x287270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x287274: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x287274u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x287278: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x287278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x28727c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x28727cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x287280: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x287280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x287284: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x287284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287288: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x287288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28728c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x28728cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287290: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x287290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x287294: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x287294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287298: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x287298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28729c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28729cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2872a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2872a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2872a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2872A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2872A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872A4u;
            // 0x2872a8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2872ACu;
    // 0x2872ac: 0x0  nop
    ctx->pc = 0x2872acu;
    // NOP
}
