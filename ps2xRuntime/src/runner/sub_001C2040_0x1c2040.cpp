#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2040
// Address: 0x1c2040 - 0x1c2250
void sub_001C2040_0x1c2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2040_0x1c2040");
#endif

    switch (ctx->pc) {
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20d0u: goto label_1c20d0;
        case 0x1c20f0u: goto label_1c20f0;
        case 0x1c2124u: goto label_1c2124;
        case 0x1c2148u: goto label_1c2148;
        case 0x1c2150u: goto label_1c2150;
        case 0x1c2164u: goto label_1c2164;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c21c0u: goto label_1c21c0;
        case 0x1c2200u: goto label_1c2200;
        case 0x1c221cu: goto label_1c221c;
        case 0x1c2224u: goto label_1c2224;
        default: break;
    }

    ctx->pc = 0x1c2040u;

    // 0x1c2040: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1c2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1c2044: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x1c2044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x1c2048: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c2048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c204c: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1c204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1c2050: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1c2050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2054: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x1c2054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x1c2058: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c2058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c205c: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x1c205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x1c2060: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c2060u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2064: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x1c2064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x1c2068: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1c2068u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c206c: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1c206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1c2070: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1c2070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1c2074: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2074u;
    {
        const bool branch_taken_0x1c2074 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2074u;
            // 0x1c2078: 0xffbf0238  sd          $ra, 0x238($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2074) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C207Cu;
    // 0x1c207c: 0x12a0006a  beqz        $s5, . + 4 + (0x6A << 2)
    ctx->pc = 0x1C207Cu;
    {
        const bool branch_taken_0x1c207c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C207Cu;
            // 0x1c2080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c207c) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C2084u;
    // 0x1c2084: 0x12400069  beqz        $s2, . + 4 + (0x69 << 2)
    ctx->pc = 0x1C2084u;
    {
        const bool branch_taken_0x1c2084 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2084u;
            // 0x1c2088: 0xdfb00200  ld          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2084) {
            ctx->pc = 0x1C222Cu;
            goto label_1c222c;
        }
    }
    ctx->pc = 0x1C208Cu;
    // 0x1c208c: 0x1ac00067  blez        $s6, . + 4 + (0x67 << 2)
    ctx->pc = 0x1C208Cu;
    {
        const bool branch_taken_0x1c208c = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x1c208c) {
            ctx->pc = 0x1C222Cu;
            goto label_1c222c;
        }
    }
    ctx->pc = 0x1C2094u;
    // 0x1c2094: 0x1e800004  bgtz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2094u;
    {
        const bool branch_taken_0x1c2094 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x1c2094) {
            ctx->pc = 0x1C20A8u;
            goto label_1c20a8;
        }
    }
    ctx->pc = 0x1C209Cu;
label_1c209c:
    // 0x1c209c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1C209Cu;
    {
        const bool branch_taken_0x1c209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C209Cu;
            // 0x1c20a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c209c) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C20A4u;
    // 0x1c20a4: 0x0  nop
    ctx->pc = 0x1c20a4u;
    // NOP
label_1c20a8:
    // 0x1c20a8: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1C20A8u;
    SET_GPR_U32(ctx, 31, 0x1C20B0u);
    ctx->pc = 0x1C20ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20A8u;
            // 0x1c20ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20B0u; }
        if (ctx->pc != 0x1C20B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20B0u; }
        if (ctx->pc != 0x1C20B0u) { return; }
    }
    ctx->pc = 0x1C20B0u;
label_1c20b0:
    // 0x1c20b0: 0x2c430201  sltiu       $v1, $v0, 0x201
    ctx->pc = 0x1c20b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x1c20b4: 0x1060005c  beqz        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1C20B4u;
    {
        const bool branch_taken_0x1c20b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20B4u;
            // 0x1c20b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20b4) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C20BCu;
    // 0x1c20bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c20bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20c4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1c20c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c20c8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C20C8u;
    SET_GPR_U32(ctx, 31, 0x1C20D0u);
    ctx->pc = 0x1C20CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20C8u;
            // 0x1c20cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20D0u; }
        if (ctx->pc != 0x1C20D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C20D0u; }
        if (ctx->pc != 0x1C20D0u) { return; }
    }
    ctx->pc = 0x1C20D0u;
label_1c20d0:
    // 0x1c20d0: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c20d4: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1c20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1c20d8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C20D8u;
    {
        const bool branch_taken_0x1c20d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C20DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20D8u;
            // 0x1c20dc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d8) {
            ctx->pc = 0x1C211Cu;
            goto label_1c211c;
        }
    }
    ctx->pc = 0x1C20E0u;
    // 0x1c20e0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1C20E0u;
    {
        const bool branch_taken_0x1c20e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20E0u;
            // 0x1c20e4: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20e0) {
            ctx->pc = 0x1C211Cu;
            goto label_1c211c;
        }
    }
    ctx->pc = 0x1C20E8u;
    // 0x1c20e8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1c20e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c20ec: 0x0  nop
    ctx->pc = 0x1c20ecu;
    // NOP
label_1c20f0:
    // 0x1c20f0: 0x3b11821  addu        $v1, $sp, $s1
    ctx->pc = 0x1c20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 17)));
    // 0x1c20f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c20f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c20f8: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x1c20f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1c20fc: 0x2518021  addu        $s0, $s2, $s1
    ctx->pc = 0x1c20fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c2100: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2100u;
    {
        const bool branch_taken_0x1c2100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2100u;
            // 0x1c2104: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2100) {
            ctx->pc = 0x1C211Cu;
            goto label_1c211c;
        }
    }
    ctx->pc = 0x1C2108u;
    // 0x1c2108: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c2108u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c210c: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C210Cu;
    {
        const bool branch_taken_0x1c210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c210c) {
            ctx->pc = 0x1C211Cu;
            goto label_1c211c;
        }
    }
    ctx->pc = 0x1C2114u;
    // 0x1c2114: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C2114u;
    {
        const bool branch_taken_0x1c2114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2114) {
            ctx->pc = 0x1C2118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2114u;
            // 0x1c2118: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C20F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c20f0;
        }
    }
    ctx->pc = 0x1C211Cu;
label_1c211c:
    // 0x1c211c: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1C211Cu;
    SET_GPR_U32(ctx, 31, 0x1C2124u);
    ctx->pc = 0x1C2120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C211Cu;
            // 0x1c2120: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2124u; }
        if (ctx->pc != 0x1C2124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2124u; }
        if (ctx->pc != 0x1C2124u) { return; }
    }
    ctx->pc = 0x1C2124u;
label_1c2124:
    // 0x1c2124: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1c2124u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2128: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2128u;
    {
        const bool branch_taken_0x1c2128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2128u;
            // 0x1c212c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2128) {
            ctx->pc = 0x1C2170u;
            goto label_1c2170;
        }
    }
    ctx->pc = 0x1C2130u;
    // 0x1c2130: 0x286182a  slt         $v1, $s4, $a2
    ctx->pc = 0x1c2130u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c2134: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C2134u;
    {
        const bool branch_taken_0x1c2134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2134u;
            // 0x1c2138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2134) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C213Cu;
    // 0x1c213c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c213cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2140: 0xc04a508  jal         func_129420
    ctx->pc = 0x1C2140u;
    SET_GPR_U32(ctx, 31, 0x1C2148u);
    ctx->pc = 0x1C2144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2140u;
            // 0x1c2144: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2148u; }
        if (ctx->pc != 0x1C2148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2148u; }
        if (ctx->pc != 0x1C2148u) { return; }
    }
    ctx->pc = 0x1C2148u;
label_1c2148:
    // 0x1c2148: 0xc070d0c  jal         func_1C3430
    ctx->pc = 0x1C2148u;
    SET_GPR_U32(ctx, 31, 0x1C2150u);
    ctx->pc = 0x1C214Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2148u;
            // 0x1c214c: 0xa2600000  sb          $zero, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3430u;
    if (runtime->hasFunction(0x1C3430u)) {
        auto targetFn = runtime->lookupFunction(0x1C3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2150u; }
        if (ctx->pc != 0x1C2150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C3430_0x1c3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2150u; }
        if (ctx->pc != 0x1C2150u) { return; }
    }
    ctx->pc = 0x1C2150u;
label_1c2150:
    // 0x1c2150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2154: 0x50a00035  beql        $a1, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C2154u;
    {
        const bool branch_taken_0x1c2154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2154) {
            ctx->pc = 0x1C2158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2154u;
            // 0x1c2158: 0xdfb00200  ld          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C222Cu;
            goto label_1c222c;
        }
    }
    ctx->pc = 0x1C215Cu;
    // 0x1c215c: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1C215Cu;
    SET_GPR_U32(ctx, 31, 0x1C2164u);
    ctx->pc = 0x1C2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C215Cu;
            // 0x1c2160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2164u; }
        if (ctx->pc != 0x1C2164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2164u; }
        if (ctx->pc != 0x1C2164u) { return; }
    }
    ctx->pc = 0x1C2164u;
label_1c2164:
    // 0x1c2164: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1C2164u;
    {
        const bool branch_taken_0x1c2164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2164u;
            // 0x1c2168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2164) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C216Cu;
    // 0x1c216c: 0x0  nop
    ctx->pc = 0x1c216cu;
    // NOP
label_1c2170:
    // 0x1c2170: 0x2c6182a  slt         $v1, $s6, $a2
    ctx->pc = 0x1c2170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c2174: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C2174u;
    {
        const bool branch_taken_0x1c2174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2174u;
            // 0x1c2178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2174) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C217Cu;
    // 0x1c217c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c2180: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c2180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2184: 0xc04a508  jal         func_129420
    ctx->pc = 0x1C2184u;
    SET_GPR_U32(ctx, 31, 0x1C218Cu);
    ctx->pc = 0x1C2188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2184u;
            // 0x1c2188: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C218Cu; }
        if (ctx->pc != 0x1C218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C218Cu; }
        if (ctx->pc != 0x1C218Cu) { return; }
    }
    ctx->pc = 0x1C218Cu;
label_1c218c:
    // 0x1c218c: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x1c218cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1c2190: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C2190u;
    {
        const bool branch_taken_0x1c2190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2190u;
            // 0x1c2194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2190) {
            ctx->pc = 0x1C21ECu;
            goto label_1c21ec;
        }
    }
    ctx->pc = 0x1C2198u;
    // 0x1c2198: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1c2198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1c219c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1c219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1c21a0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x1c21a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c21a4: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C21A4u;
    {
        const bool branch_taken_0x1c21a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C21A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21A4u;
            // 0x1c21a8: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21a4) {
            ctx->pc = 0x1C21F0u;
            goto label_1c21f0;
        }
    }
    ctx->pc = 0x1C21ACu;
    // 0x1c21ac: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C21ACu;
    {
        const bool branch_taken_0x1c21ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21ACu;
            // 0x1c21b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21ac) {
            ctx->pc = 0x1C21F4u;
            goto label_1c21f4;
        }
    }
    ctx->pc = 0x1C21B4u;
    // 0x1c21b4: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x1c21b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1c21b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c21b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21bc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1c21bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c21c0:
    // 0x1c21c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c21c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c21c4: 0x28a40200  slti        $a0, $a1, 0x200
    ctx->pc = 0x1c21c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1c21c8: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1c21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1c21cc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1c21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c21d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C21D0u;
    {
        const bool branch_taken_0x1c21d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21D0u;
            // 0x1c21d4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21d0) {
            ctx->pc = 0x1C21ECu;
            goto label_1c21ec;
        }
    }
    ctx->pc = 0x1C21D8u;
    // 0x1c21d8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c21d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c21dc: 0x50470004  beql        $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C21DCu;
    {
        const bool branch_taken_0x1c21dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1c21dc) {
            ctx->pc = 0x1C21E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21DCu;
            // 0x1c21e0: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C21F0u;
            goto label_1c21f0;
        }
    }
    ctx->pc = 0x1C21E4u;
    // 0x1c21e4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C21E4u;
    {
        const bool branch_taken_0x1c21e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c21e4) {
            ctx->pc = 0x1C21E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21E4u;
            // 0x1c21e8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C21C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C21ECu;
label_1c21ec:
    // 0x1c21ec: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1c21f0:
    // 0x1c21f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c21f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c21f4:
    // 0x1c21f4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1c21f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1c21f8: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1C21F8u;
    SET_GPR_U32(ctx, 31, 0x1C2200u);
    ctx->pc = 0x1C21FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21F8u;
            // 0x1c21fc: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2200u; }
        if (ctx->pc != 0x1C2200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2200u; }
        if (ctx->pc != 0x1C2200u) { return; }
    }
    ctx->pc = 0x1C2200u;
label_1c2200:
    // 0x1c2200: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1c2200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2204: 0x286182a  slt         $v1, $s4, $a2
    ctx->pc = 0x1c2204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c2208: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2208u;
    {
        const bool branch_taken_0x1c2208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C220Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2208u;
            // 0x1c220c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2208) {
            ctx->pc = 0x1C2228u;
            goto label_1c2228;
        }
    }
    ctx->pc = 0x1C2210u;
    // 0x1c2210: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c2210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2214: 0xc04a508  jal         func_129420
    ctx->pc = 0x1C2214u;
    SET_GPR_U32(ctx, 31, 0x1C221Cu);
    ctx->pc = 0x1C2218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2214u;
            // 0x1c2218: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C221Cu; }
        if (ctx->pc != 0x1C221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C221Cu; }
        if (ctx->pc != 0x1C221Cu) { return; }
    }
    ctx->pc = 0x1C221Cu;
label_1c221c:
    // 0x1c221c: 0xc071244  jal         func_1C4910
    ctx->pc = 0x1C221Cu;
    SET_GPR_U32(ctx, 31, 0x1C2224u);
    ctx->pc = 0x1C2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C221Cu;
            // 0x1c2220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4910u;
    if (runtime->hasFunction(0x1C4910u)) {
        auto targetFn = runtime->lookupFunction(0x1C4910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2224u; }
        if (ctx->pc != 0x1C2224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4910_0x1c4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2224u; }
        if (ctx->pc != 0x1C2224u) { return; }
    }
    ctx->pc = 0x1C2224u;
label_1c2224:
    // 0x1c2224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2228:
    // 0x1c2228: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1c2228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_1c222c:
    // 0x1c222c: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1c222cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1c2230: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1c2230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1c2234: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1c2234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1c2238: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1c2238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c223c: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1c223cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1c2240: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1c2240u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c2244: 0xdfbf0238  ld          $ra, 0x238($sp)
    ctx->pc = 0x1c2244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1c2248: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2248u;
            // 0x1c224c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2250u;
}
