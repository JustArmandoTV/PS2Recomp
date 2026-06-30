#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00498D40
// Address: 0x498d40 - 0x499050
void sub_00498D40_0x498d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498D40_0x498d40");
#endif

    switch (ctx->pc) {
        case 0x498da4u: goto label_498da4;
        case 0x498db0u: goto label_498db0;
        case 0x498dc4u: goto label_498dc4;
        case 0x498e00u: goto label_498e00;
        case 0x498e10u: goto label_498e10;
        case 0x498ea0u: goto label_498ea0;
        case 0x498eb4u: goto label_498eb4;
        case 0x498ed4u: goto label_498ed4;
        case 0x498ee8u: goto label_498ee8;
        case 0x498f04u: goto label_498f04;
        case 0x498f24u: goto label_498f24;
        case 0x498f4cu: goto label_498f4c;
        case 0x498f60u: goto label_498f60;
        case 0x498f6cu: goto label_498f6c;
        case 0x498fc0u: goto label_498fc0;
        case 0x498fd4u: goto label_498fd4;
        case 0x498ff4u: goto label_498ff4;
        default: break;
    }

    ctx->pc = 0x498d40u;

    // 0x498d40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x498d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x498d44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x498d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x498d48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x498d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x498d4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x498d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x498d50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x498d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x498d54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x498d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x498d58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x498d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x498d5c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x498d5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498d60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x498d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x498d64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x498d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x498d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x498d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x498d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x498d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x498d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x498d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x498d74: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x498d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x498d78: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x498d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498d7c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x498d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x498d80: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x498d80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x498d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x498d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x498d88: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x498D88u;
    {
        const bool branch_taken_0x498d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498D88u;
            // 0x498d8c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498d88) {
            ctx->pc = 0x498DE0u;
            goto label_498de0;
        }
    }
    ctx->pc = 0x498D90u;
    // 0x498d90: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x498d90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x498d94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498d98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498d9c: 0xc0400c4  jal         func_100310
    ctx->pc = 0x498D9Cu;
    SET_GPR_U32(ctx, 31, 0x498DA4u);
    ctx->pc = 0x498DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498D9Cu;
            // 0x498da0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498DA4u; }
        if (ctx->pc != 0x498DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498DA4u; }
        if (ctx->pc != 0x498DA4u) { return; }
    }
    ctx->pc = 0x498DA4u;
label_498da4:
    // 0x498da4: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x498da4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x498da8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x498da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498dac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x498dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498db0:
    // 0x498db0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x498db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x498db4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x498db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498db8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x498db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x498dbc: 0xc04a508  jal         func_129420
    ctx->pc = 0x498DBCu;
    SET_GPR_U32(ctx, 31, 0x498DC4u);
    ctx->pc = 0x498DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498DBCu;
            // 0x498dc0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498DC4u; }
        if (ctx->pc != 0x498DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498DC4u; }
        if (ctx->pc != 0x498DC4u) { return; }
    }
    ctx->pc = 0x498DC4u;
label_498dc4:
    // 0x498dc4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x498dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x498dc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x498dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x498dcc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x498dccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x498dd0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x498dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x498dd4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x498DD4u;
    {
        const bool branch_taken_0x498dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498DD4u;
            // 0x498dd8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498dd4) {
            ctx->pc = 0x498DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_498db0;
        }
    }
    ctx->pc = 0x498DDCu;
    // 0x498ddc: 0x0  nop
    ctx->pc = 0x498ddcu;
    // NOP
label_498de0:
    // 0x498de0: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x498de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x498de4: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x498DE4u;
    {
        const bool branch_taken_0x498de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498de4) {
            ctx->pc = 0x499010u;
            goto label_499010;
        }
    }
    ctx->pc = 0x498DECu;
    // 0x498dec: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x498decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x498df0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498df4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498df8: 0xc0400c4  jal         func_100310
    ctx->pc = 0x498DF8u;
    SET_GPR_U32(ctx, 31, 0x498E00u);
    ctx->pc = 0x498DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498DF8u;
            // 0x498dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498E00u; }
        if (ctx->pc != 0x498E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498E00u; }
        if (ctx->pc != 0x498E00u) { return; }
    }
    ctx->pc = 0x498E00u;
label_498e00:
    // 0x498e00: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x498e00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
    // 0x498e04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x498e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498e08: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x498e08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498e0c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x498e0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498e10:
    // 0x498e10: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x498e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x498e14: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x498E14u;
    {
        const bool branch_taken_0x498e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x498E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498E14u;
            // 0x498e18: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e14) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498E1Cu;
    // 0x498e1c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x498e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x498e20: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x498E20u;
    {
        const bool branch_taken_0x498e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e20) {
            ctx->pc = 0x498FE0u;
            goto label_498fe0;
        }
    }
    ctx->pc = 0x498E28u;
    // 0x498e28: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x498e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x498e2c: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x498E2Cu;
    {
        const bool branch_taken_0x498e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e2c) {
            ctx->pc = 0x498FA8u;
            goto label_498fa8;
        }
    }
    ctx->pc = 0x498E34u;
    // 0x498e34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498e38: 0x10660057  beq         $v1, $a2, . + 4 + (0x57 << 2)
    ctx->pc = 0x498E38u;
    {
        const bool branch_taken_0x498e38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x498e38) {
            ctx->pc = 0x498F98u;
            goto label_498f98;
        }
    }
    ctx->pc = 0x498E40u;
    // 0x498e40: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x498e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x498e44: 0x10640032  beq         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x498E44u;
    {
        const bool branch_taken_0x498e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x498e44) {
            ctx->pc = 0x498F10u;
            goto label_498f10;
        }
    }
    ctx->pc = 0x498E4Cu;
    // 0x498e4c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x498e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x498e50: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x498E50u;
    {
        const bool branch_taken_0x498e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e50) {
            ctx->pc = 0x498EF0u;
            goto label_498ef0;
        }
    }
    ctx->pc = 0x498E58u;
    // 0x498e58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x498e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x498e5c: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x498E5Cu;
    {
        const bool branch_taken_0x498e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e5c) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498E64u;
    // 0x498e64: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x498e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x498e68: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x498E68u;
    {
        const bool branch_taken_0x498e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e68) {
            ctx->pc = 0x498EC0u;
            goto label_498ec0;
        }
    }
    ctx->pc = 0x498E70u;
    // 0x498e70: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x498e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x498e74: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x498E74u;
    {
        const bool branch_taken_0x498e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e74) {
            ctx->pc = 0x498E90u;
            goto label_498e90;
        }
    }
    ctx->pc = 0x498E7Cu;
    // 0x498e7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x498e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498e80: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x498E80u;
    {
        const bool branch_taken_0x498e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x498e80) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498E88u;
    // 0x498e88: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x498E88u;
    {
        const bool branch_taken_0x498e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x498e88) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498E90u;
label_498e90:
    // 0x498e90: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498e90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498e94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498e98: 0xc040140  jal         func_100500
    ctx->pc = 0x498E98u;
    SET_GPR_U32(ctx, 31, 0x498EA0u);
    ctx->pc = 0x498E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498E98u;
            // 0x498e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498EA0u; }
        if (ctx->pc != 0x498EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498EA0u; }
        if (ctx->pc != 0x498EA0u) { return; }
    }
    ctx->pc = 0x498EA0u;
label_498ea0:
    // 0x498ea0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x498ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x498ea4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x498ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498ea8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x498ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x498eac: 0xc1260dc  jal         func_498370
    ctx->pc = 0x498EACu;
    SET_GPR_U32(ctx, 31, 0x498EB4u);
    ctx->pc = 0x498EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498EACu;
            // 0x498eb0: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x498370u;
    if (runtime->hasFunction(0x498370u)) {
        auto targetFn = runtime->lookupFunction(0x498370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498EB4u; }
        if (ctx->pc != 0x498EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498370_0x498370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498EB4u; }
        if (ctx->pc != 0x498EB4u) { return; }
    }
    ctx->pc = 0x498EB4u;
label_498eb4:
    // 0x498eb4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x498EB4u;
    {
        const bool branch_taken_0x498eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498EB4u;
            // 0x498eb8: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498eb4) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498EBCu;
    // 0x498ebc: 0x0  nop
    ctx->pc = 0x498ebcu;
    // NOP
label_498ec0:
    // 0x498ec0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498ec4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x498ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x498ec8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498ecc: 0xc040140  jal         func_100500
    ctx->pc = 0x498ECCu;
    SET_GPR_U32(ctx, 31, 0x498ED4u);
    ctx->pc = 0x498ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498ECCu;
            // 0x498ed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498ED4u; }
        if (ctx->pc != 0x498ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498ED4u; }
        if (ctx->pc != 0x498ED4u) { return; }
    }
    ctx->pc = 0x498ED4u;
label_498ed4:
    // 0x498ed4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x498ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x498ed8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x498ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498edc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x498edcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x498ee0: 0xc126064  jal         func_498190
    ctx->pc = 0x498EE0u;
    SET_GPR_U32(ctx, 31, 0x498EE8u);
    ctx->pc = 0x498EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498EE0u;
            // 0x498ee4: 0x27a600ac  addiu       $a2, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x498190u;
    if (runtime->hasFunction(0x498190u)) {
        auto targetFn = runtime->lookupFunction(0x498190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498EE8u; }
        if (ctx->pc != 0x498EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498190_0x498190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498EE8u; }
        if (ctx->pc != 0x498EE8u) { return; }
    }
    ctx->pc = 0x498EE8u;
label_498ee8:
    // 0x498ee8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x498EE8u;
    {
        const bool branch_taken_0x498ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498EE8u;
            // 0x498eec: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498ee8) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498EF0u;
label_498ef0:
    // 0x498ef0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498ef4: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x498ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x498ef8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x498ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498efc: 0xc04a508  jal         func_129420
    ctx->pc = 0x498EFCu;
    SET_GPR_U32(ctx, 31, 0x498F04u);
    ctx->pc = 0x498F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498EFCu;
            // 0x498f00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F04u; }
        if (ctx->pc != 0x498F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F04u; }
        if (ctx->pc != 0x498F04u) { return; }
    }
    ctx->pc = 0x498F04u;
label_498f04:
    // 0x498f04: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x498F04u;
    {
        const bool branch_taken_0x498f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498F04u;
            // 0x498f08: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f04) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498F0Cu;
    // 0x498f0c: 0x0  nop
    ctx->pc = 0x498f0cu;
    // NOP
label_498f10:
    // 0x498f10: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498f14: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x498f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x498f18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498f1c: 0xc040140  jal         func_100500
    ctx->pc = 0x498F1Cu;
    SET_GPR_U32(ctx, 31, 0x498F24u);
    ctx->pc = 0x498F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498F1Cu;
            // 0x498f20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F24u; }
        if (ctx->pc != 0x498F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F24u; }
        if (ctx->pc != 0x498F24u) { return; }
    }
    ctx->pc = 0x498F24u;
label_498f24:
    // 0x498f24: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x498f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x498f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x498f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498f2c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x498f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x498f30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498f38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x498f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498f3c: 0x26b10004  addiu       $s1, $s5, 0x4
    ctx->pc = 0x498f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x498f40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x498f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x498f44: 0xc0400c4  jal         func_100310
    ctx->pc = 0x498F44u;
    SET_GPR_U32(ctx, 31, 0x498F4Cu);
    ctx->pc = 0x498F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498F44u;
            // 0x498f48: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F4Cu; }
        if (ctx->pc != 0x498F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F4Cu; }
        if (ctx->pc != 0x498F4Cu) { return; }
    }
    ctx->pc = 0x498F4Cu;
label_498f4c:
    // 0x498f4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x498f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x498f50: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x498f50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498f54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x498f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498f58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x498F58u;
    {
        const bool branch_taken_0x498f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498F58u;
            // 0x498f5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f58) {
            ctx->pc = 0x498F88u;
            goto label_498f88;
        }
    }
    ctx->pc = 0x498F60u;
label_498f60:
    // 0x498f60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x498f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498f64: 0xc12613c  jal         func_4984F0
    ctx->pc = 0x498F64u;
    SET_GPR_U32(ctx, 31, 0x498F6Cu);
    ctx->pc = 0x498F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498F64u;
            // 0x498f68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4984F0u;
    if (runtime->hasFunction(0x4984F0u)) {
        auto targetFn = runtime->lookupFunction(0x4984F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F6Cu; }
        if (ctx->pc != 0x498F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004984F0_0x4984f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498F6Cu; }
        if (ctx->pc != 0x498F6Cu) { return; }
    }
    ctx->pc = 0x498F6Cu;
label_498f6c:
    // 0x498f6c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x498f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x498f70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x498f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x498f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x498f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x498f78: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x498f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x498f7c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x498F7Cu;
    {
        const bool branch_taken_0x498f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498F7Cu;
            // 0x498f80: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f7c) {
            ctx->pc = 0x498F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_498f60;
        }
    }
    ctx->pc = 0x498F84u;
    // 0x498f84: 0x0  nop
    ctx->pc = 0x498f84u;
    // NOP
label_498f88:
    // 0x498f88: 0x2351023  subu        $v0, $s1, $s5
    ctx->pc = 0x498f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x498f8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x498F8Cu;
    {
        const bool branch_taken_0x498f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498F8Cu;
            // 0x498f90: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f8c) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498F94u;
    // 0x498f94: 0x0  nop
    ctx->pc = 0x498f94u;
    // NOP
label_498f98:
    // 0x498f98: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498f98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498f9c: 0xae970004  sw          $s7, 0x4($s4)
    ctx->pc = 0x498f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 23));
    // 0x498fa0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x498FA0u;
    {
        const bool branch_taken_0x498fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498FA0u;
            // 0x498fa4: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498fa0) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498FA8u;
label_498fa8:
    // 0x498fa8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498fac: 0x96b00000  lhu         $s0, 0x0($s5)
    ctx->pc = 0x498facu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x498fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x498fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x498fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498fb8: 0xc040110  jal         func_100440
    ctx->pc = 0x498FB8u;
    SET_GPR_U32(ctx, 31, 0x498FC0u);
    ctx->pc = 0x498FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498FB8u;
            // 0x498fbc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100440u;
    if (runtime->hasFunction(0x100440u)) {
        auto targetFn = runtime->lookupFunction(0x100440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498FC0u; }
        if (ctx->pc != 0x498FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100440_0x100440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498FC0u; }
        if (ctx->pc != 0x498FC0u) { return; }
    }
    ctx->pc = 0x498FC0u;
label_498fc0:
    // 0x498fc0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x498fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x498fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x498fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498fc8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x498fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498fcc: 0xc04a508  jal         func_129420
    ctx->pc = 0x498FCCu;
    SET_GPR_U32(ctx, 31, 0x498FD4u);
    ctx->pc = 0x498FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498FCCu;
            // 0x498fd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498FD4u; }
        if (ctx->pc != 0x498FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498FD4u; }
        if (ctx->pc != 0x498FD4u) { return; }
    }
    ctx->pc = 0x498FD4u;
label_498fd4:
    // 0x498fd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x498FD4u;
    {
        const bool branch_taken_0x498fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498FD4u;
            // 0x498fd8: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498fd4) {
            ctx->pc = 0x498FF8u;
            goto label_498ff8;
        }
    }
    ctx->pc = 0x498FDCu;
    // 0x498fdc: 0x0  nop
    ctx->pc = 0x498fdcu;
    // NOP
label_498fe0:
    // 0x498fe0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x498fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x498fe4: 0x26840004  addiu       $a0, $s4, 0x4
    ctx->pc = 0x498fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x498fe8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x498fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498fec: 0xc04a508  jal         func_129420
    ctx->pc = 0x498FECu;
    SET_GPR_U32(ctx, 31, 0x498FF4u);
    ctx->pc = 0x498FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498FECu;
            // 0x498ff0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498FF4u; }
        if (ctx->pc != 0x498FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498FF4u; }
        if (ctx->pc != 0x498FF4u) { return; }
    }
    ctx->pc = 0x498FF4u;
label_498ff4:
    // 0x498ff4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x498ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_498ff8:
    // 0x498ff8: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x498ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x498ffc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x498ffcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x499000: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x499000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499004: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x499004u;
    {
        const bool branch_taken_0x499004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499004u;
            // 0x499008: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499004) {
            ctx->pc = 0x498E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_498e10;
        }
    }
    ctx->pc = 0x49900Cu;
    // 0x49900c: 0x0  nop
    ctx->pc = 0x49900cu;
    // NOP
label_499010:
    // 0x499010: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x499010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x499014: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x499014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x499018: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x499018u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49901c: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x49901cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x499020: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x499020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x499024: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x499024u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499028: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x499028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49902c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49902cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x499030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x499034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x499038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49903c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49903cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499040: 0x3e00008  jr          $ra
    ctx->pc = 0x499040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499040u;
            // 0x499044: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x499048u;
    // 0x499048: 0x0  nop
    ctx->pc = 0x499048u;
    // NOP
    // 0x49904c: 0x0  nop
    ctx->pc = 0x49904cu;
    // NOP
}
