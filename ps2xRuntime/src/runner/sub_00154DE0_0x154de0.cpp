#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154DE0
// Address: 0x154de0 - 0x155240
void sub_00154DE0_0x154de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154DE0_0x154de0");
#endif

    switch (ctx->pc) {
        case 0x154e78u: goto label_154e78;
        case 0x154e90u: goto label_154e90;
        case 0x154ea8u: goto label_154ea8;
        case 0x154ef0u: goto label_154ef0;
        case 0x154f18u: goto label_154f18;
        case 0x154f84u: goto label_154f84;
        case 0x154fd0u: goto label_154fd0;
        case 0x154ff8u: goto label_154ff8;
        case 0x155058u: goto label_155058;
        case 0x1550a8u: goto label_1550a8;
        case 0x1550d8u: goto label_1550d8;
        case 0x155138u: goto label_155138;
        case 0x155194u: goto label_155194;
        case 0x1551dcu: goto label_1551dc;
        default: break;
    }

    ctx->pc = 0x154de0u;

    // 0x154de0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x154de4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x154de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x154de8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x154de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x154dec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x154decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x154df0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x154df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x154df4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x154df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x154df8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x154df8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154dfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x154e00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x154e00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154e08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x154e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154e10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154e14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154e18: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x154e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x154e1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154E1Cu;
    {
        const bool branch_taken_0x154e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E1Cu;
            // 0x154e20: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e1c) {
            ctx->pc = 0x154E38u;
            goto label_154e38;
        }
    }
    ctx->pc = 0x154E24u;
    // 0x154e24: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x154e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x154e28: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x154E28u;
    {
        const bool branch_taken_0x154e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e28) {
            ctx->pc = 0x154E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154E28u;
            // 0x154e2c: 0x8e900010  lw          $s0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154E54u;
            goto label_154e54;
        }
    }
    ctx->pc = 0x154E30u;
    // 0x154e30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154E30u;
    {
        const bool branch_taken_0x154e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E30u;
            // 0x154e34: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e30) {
            ctx->pc = 0x154E50u;
            goto label_154e50;
        }
    }
    ctx->pc = 0x154E38u;
label_154e38:
    // 0x154e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154e3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x154e40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x154e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x154e44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x154E44u;
    {
        const bool branch_taken_0x154e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e44) {
            ctx->pc = 0x154E50u;
            goto label_154e50;
        }
    }
    ctx->pc = 0x154E4Cu;
    // 0x154e4c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x154e4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154e50:
    // 0x154e50: 0x8e900010  lw          $s0, 0x10($s4)
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_154e54:
    // 0x154e54: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x154e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x154e58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e5c: 0xaeb30014  sw          $s3, 0x14($s5)
    ctx->pc = 0x154e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 19));
    // 0x154e60: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x154e60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x154e64: 0x24c3000f  addiu       $v1, $a2, 0xF
    ctx->pc = 0x154e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x154e68: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x154e6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x154e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x154e70: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x154E70u;
    SET_GPR_U32(ctx, 31, 0x154E78u);
    ctx->pc = 0x154E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E70u;
            // 0x154e74: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E78u; }
        if (ctx->pc != 0x154E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E78u; }
        if (ctx->pc != 0x154E78u) { return; }
    }
    ctx->pc = 0x154E78u;
label_154e78:
    // 0x154e78: 0x52c000c3  beql        $s6, $zero, . + 4 + (0xC3 << 2)
    ctx->pc = 0x154E78u;
    {
        const bool branch_taken_0x154e78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x154e78) {
            ctx->pc = 0x154E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154E78u;
            // 0x154e7c: 0x8e940014  lw          $s4, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155188u;
            goto label_155188;
        }
    }
    ctx->pc = 0x154E80u;
    // 0x154e80: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x154e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x154e84: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x154E84u;
    {
        const bool branch_taken_0x154e84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x154E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E84u;
            // 0x154e88: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e84) {
            ctx->pc = 0x154ED0u;
            goto label_154ed0;
        }
    }
    ctx->pc = 0x154E8Cu;
    // 0x154e8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x154e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154e90:
    // 0x154e90: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x154e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x154e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x154e9c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x154ea0: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x154EA0u;
    SET_GPR_U32(ctx, 31, 0x154EA8u);
    ctx->pc = 0x154EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154EA0u;
            // 0x154ea4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EA8u; }
        if (ctx->pc != 0x154EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EA8u; }
        if (ctx->pc != 0x154EA8u) { return; }
    }
    ctx->pc = 0x154EA8u;
label_154ea8:
    // 0x154ea8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x154ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x154eac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x154eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x154eb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x154eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x154eb4: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x154eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x154eb8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x154eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x154ebc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x154ec0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x154ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x154ec4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x154EC4u;
    {
        const bool branch_taken_0x154ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154EC4u;
            // 0x154ec8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ec4) {
            ctx->pc = 0x154E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154e90;
        }
    }
    ctx->pc = 0x154ECCu;
    // 0x154ecc: 0x0  nop
    ctx->pc = 0x154eccu;
    // NOP
label_154ed0:
    // 0x154ed0: 0x2623000f  addiu       $v1, $s1, 0xF
    ctx->pc = 0x154ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x154ed4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x154ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x154ed8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x154ed8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154edc: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x154edcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x154ee0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x154ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x154ee4: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x154EE4u;
    {
        const bool branch_taken_0x154ee4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x154EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154EE4u;
            // 0x154ee8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ee4) {
            ctx->pc = 0x154FC0u;
            goto label_154fc0;
        }
    }
    ctx->pc = 0x154EECu;
    // 0x154eec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x154eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154ef0:
    // 0x154ef0: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x154ef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x154ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ef8: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x154efc: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x154efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x154f00: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x154f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x154f04: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x154f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x154f08: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x154f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x154f0c: 0x8c560004  lw          $s6, 0x4($v0)
    ctx->pc = 0x154f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x154f10: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x154F10u;
    {
        const bool branch_taken_0x154f10 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x154F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F10u;
            // 0x154f14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f10) {
            ctx->pc = 0x154F48u;
            goto label_154f48;
        }
    }
    ctx->pc = 0x154F18u;
label_154f18:
    // 0x154f18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x154f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x154f1c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x154f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x154f20: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154F20u;
    {
        const bool branch_taken_0x154f20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154f20) {
            ctx->pc = 0x154F38u;
            goto label_154f38;
        }
    }
    ctx->pc = 0x154F28u;
    // 0x154f28: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x154f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x154F2Cu;
    {
        const bool branch_taken_0x154f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F2Cu;
            // 0x154f30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f2c) {
            ctx->pc = 0x154F48u;
            goto label_154f48;
        }
    }
    ctx->pc = 0x154F34u;
    // 0x154f34: 0x0  nop
    ctx->pc = 0x154f34u;
    // NOP
label_154f38:
    // 0x154f38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x154f3c: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x154f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x154f40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x154F40u;
    {
        const bool branch_taken_0x154f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F40u;
            // 0x154f44: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f40) {
            ctx->pc = 0x154F18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154f18;
        }
    }
    ctx->pc = 0x154F48u;
label_154f48:
    // 0x154f48: 0x14c00011  bnez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x154F48u;
    {
        const bool branch_taken_0x154f48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x154f48) {
            ctx->pc = 0x154F90u;
            goto label_154f90;
        }
    }
    ctx->pc = 0x154F50u;
    // 0x154f50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x154f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x154f54: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x154f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x154f58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x154f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x154f5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x154F5Cu;
    {
        const bool branch_taken_0x154f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154f5c) {
            ctx->pc = 0x154F70u;
            goto label_154f70;
        }
    }
    ctx->pc = 0x154F64u;
    // 0x154f64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154F64u;
    {
        const bool branch_taken_0x154f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F64u;
            // 0x154f68: 0x24120050  addiu       $s2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f64) {
            ctx->pc = 0x154F78u;
            goto label_154f78;
        }
    }
    ctx->pc = 0x154F6Cu;
    // 0x154f6c: 0x0  nop
    ctx->pc = 0x154f6cu;
    // NOP
label_154f70:
    // 0x154f70: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x154f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x154f74: 0x0  nop
    ctx->pc = 0x154f74u;
    // NOP
label_154f78:
    // 0x154f78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x154f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f7c: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x154F7Cu;
    SET_GPR_U32(ctx, 31, 0x154F84u);
    ctx->pc = 0x154F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F7Cu;
            // 0x154f80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F84u; }
        if (ctx->pc != 0x154F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F84u; }
        if (ctx->pc != 0x154F84u) { return; }
    }
    ctx->pc = 0x154F84u;
label_154f84:
    // 0x154f84: 0xaed30008  sw          $s3, 0x8($s6)
    ctx->pc = 0x154f84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 19));
    // 0x154f88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154F88u;
    {
        const bool branch_taken_0x154f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F88u;
            // 0x154f8c: 0x2729821  addu        $s3, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f88) {
            ctx->pc = 0x154FA8u;
            goto label_154fa8;
        }
    }
    ctx->pc = 0x154F90u;
label_154f90:
    // 0x154f90: 0x1710c0  sll         $v0, $s7, 3
    ctx->pc = 0x154f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x154f94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x154f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154f98: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x154f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x154f9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x154f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x154fa0: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x154fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x154fa4: 0x0  nop
    ctx->pc = 0x154fa4u;
    // NOP
label_154fa8:
    // 0x154fa8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x154fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x154fac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x154facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x154fb0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x154fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x154fb4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x154FB4u;
    {
        const bool branch_taken_0x154fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154FB4u;
            // 0x154fb8: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fb4) {
            ctx->pc = 0x154EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154ef0;
        }
    }
    ctx->pc = 0x154FBCu;
    // 0x154fbc: 0x0  nop
    ctx->pc = 0x154fbcu;
    // NOP
label_154fc0:
    // 0x154fc0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x154fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x154fc4: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x154FC4u;
    {
        const bool branch_taken_0x154fc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x154FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154FC4u;
            // 0x154fc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fc4) {
            ctx->pc = 0x155098u;
            goto label_155098;
        }
    }
    ctx->pc = 0x154FCCu;
    // 0x154fcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x154fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154fd0:
    // 0x154fd0: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x154fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x154fd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x154fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154fd8: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x154fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x154fdc: 0x1121021  addu        $v0, $t0, $s2
    ctx->pc = 0x154fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x154fe0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x154fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x154fe4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x154fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x154fe8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x154fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x154fec: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x154fecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x154ff0: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x154FF0u;
    {
        const bool branch_taken_0x154ff0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x154FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154FF0u;
            // 0x154ff4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ff0) {
            ctx->pc = 0x155028u;
            goto label_155028;
        }
    }
    ctx->pc = 0x154FF8u;
label_154ff8:
    // 0x154ff8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x154ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x154ffc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x154ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x155000: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155000u;
    {
        const bool branch_taken_0x155000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x155000) {
            ctx->pc = 0x155018u;
            goto label_155018;
        }
    }
    ctx->pc = 0x155008u;
    // 0x155008: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x155008u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15500c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15500Cu;
    {
        const bool branch_taken_0x15500c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15500Cu;
            // 0x155010: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15500c) {
            ctx->pc = 0x155028u;
            goto label_155028;
        }
    }
    ctx->pc = 0x155014u;
    // 0x155014: 0x0  nop
    ctx->pc = 0x155014u;
    // NOP
label_155018:
    // 0x155018: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x155018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15501c: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x15501cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x155020: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x155020u;
    {
        const bool branch_taken_0x155020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155020u;
            // 0x155024: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155020) {
            ctx->pc = 0x154FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154ff8;
        }
    }
    ctx->pc = 0x155028u;
label_155028:
    // 0x155028: 0x14e0000f  bnez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x155028u;
    {
        const bool branch_taken_0x155028 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x155028) {
            ctx->pc = 0x155068u;
            goto label_155068;
        }
    }
    ctx->pc = 0x155030u;
    // 0x155030: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155034: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x155034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x155038: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15503c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x15503Cu;
    {
        const bool branch_taken_0x15503c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15503c) {
            ctx->pc = 0x155040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15503Cu;
            // 0x155040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155048u;
            goto label_155048;
        }
    }
    ctx->pc = 0x155044u;
    // 0x155044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155048:
    // 0x155048: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x155048u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15504c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155050: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x155050u;
    SET_GPR_U32(ctx, 31, 0x155058u);
    ctx->pc = 0x155054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155050u;
            // 0x155054: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155058u; }
        if (ctx->pc != 0x155058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155058u; }
        if (ctx->pc != 0x155058u) { return; }
    }
    ctx->pc = 0x155058u;
label_155058:
    // 0x155058: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x155058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x15505c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15505Cu;
    {
        const bool branch_taken_0x15505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15505Cu;
            // 0x155060: 0x2769821  addu        $s3, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15505c) {
            ctx->pc = 0x155080u;
            goto label_155080;
        }
    }
    ctx->pc = 0x155064u;
    // 0x155064: 0x0  nop
    ctx->pc = 0x155064u;
    // NOP
label_155068:
    // 0x155068: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x155068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x15506c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155070: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x155070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x155074: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x155074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x155078: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x155078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x15507c: 0x0  nop
    ctx->pc = 0x15507cu;
    // NOP
label_155080:
    // 0x155080: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x155080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x155084: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155088: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15508c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x15508Cu;
    {
        const bool branch_taken_0x15508c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15508Cu;
            // 0x155090: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15508c) {
            ctx->pc = 0x154FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154fd0;
        }
    }
    ctx->pc = 0x155094u;
    // 0x155094: 0x0  nop
    ctx->pc = 0x155094u;
    // NOP
label_155098:
    // 0x155098: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x155098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x15509c: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x15509Cu;
    {
        const bool branch_taken_0x15509c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1550A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15509Cu;
            // 0x1550a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15509c) {
            ctx->pc = 0x155178u;
            goto label_155178;
        }
    }
    ctx->pc = 0x1550A4u;
    // 0x1550a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1550a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1550a8:
    // 0x1550a8: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x1550a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1550ac: 0x1121021  addu        $v0, $t0, $s2
    ctx->pc = 0x1550acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x1550b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1550b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1550b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1550b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1550b8: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1550B8u;
    {
        const bool branch_taken_0x1550b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1550b8) {
            ctx->pc = 0x155160u;
            goto label_155160;
        }
    }
    ctx->pc = 0x1550C0u;
    // 0x1550c0: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1550c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1550c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1550c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1550c8: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1550c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1550cc: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1550ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1550d0: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1550D0u;
    {
        const bool branch_taken_0x1550d0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1550D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1550D0u;
            // 0x1550d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550d0) {
            ctx->pc = 0x155108u;
            goto label_155108;
        }
    }
    ctx->pc = 0x1550D8u;
label_1550d8:
    // 0x1550d8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1550d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1550dc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1550dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1550e0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1550E0u;
    {
        const bool branch_taken_0x1550e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1550e0) {
            ctx->pc = 0x1550F8u;
            goto label_1550f8;
        }
    }
    ctx->pc = 0x1550E8u;
    // 0x1550e8: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1550e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x1550ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1550ECu;
    {
        const bool branch_taken_0x1550ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1550F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1550ECu;
            // 0x1550f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550ec) {
            ctx->pc = 0x155108u;
            goto label_155108;
        }
    }
    ctx->pc = 0x1550F4u;
    // 0x1550f4: 0x0  nop
    ctx->pc = 0x1550f4u;
    // NOP
label_1550f8:
    // 0x1550f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1550f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1550fc: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x1550fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x155100: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x155100u;
    {
        const bool branch_taken_0x155100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155100u;
            // 0x155104: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155100) {
            ctx->pc = 0x1550D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1550d8;
        }
    }
    ctx->pc = 0x155108u;
label_155108:
    // 0x155108: 0x14e0000f  bnez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x155108u;
    {
        const bool branch_taken_0x155108 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x155108) {
            ctx->pc = 0x155148u;
            goto label_155148;
        }
    }
    ctx->pc = 0x155110u;
    // 0x155110: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155114: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x155114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x155118: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x155118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15511c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x15511Cu;
    {
        const bool branch_taken_0x15511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15511c) {
            ctx->pc = 0x155120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15511Cu;
            // 0x155120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155128u;
            goto label_155128;
        }
    }
    ctx->pc = 0x155124u;
    // 0x155124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_155128:
    // 0x155128: 0x2b180  sll         $s6, $v0, 6
    ctx->pc = 0x155128u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x15512c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155130: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x155130u;
    SET_GPR_U32(ctx, 31, 0x155138u);
    ctx->pc = 0x155134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155130u;
            // 0x155134: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155138u; }
        if (ctx->pc != 0x155138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155138u; }
        if (ctx->pc != 0x155138u) { return; }
    }
    ctx->pc = 0x155138u;
label_155138:
    // 0x155138: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x155138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x15513c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15513Cu;
    {
        const bool branch_taken_0x15513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15513Cu;
            // 0x155140: 0x2769821  addu        $s3, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15513c) {
            ctx->pc = 0x155160u;
            goto label_155160;
        }
    }
    ctx->pc = 0x155144u;
    // 0x155144: 0x0  nop
    ctx->pc = 0x155144u;
    // NOP
label_155148:
    // 0x155148: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x155148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x15514c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x155150: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x155150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155154: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x155154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x155158: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x155158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15515c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15515cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_155160:
    // 0x155160: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x155160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x155164: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x155164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x155168: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x155168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15516c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x15516Cu;
    {
        const bool branch_taken_0x15516c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15516Cu;
            // 0x155170: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15516c) {
            ctx->pc = 0x1550A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1550a8;
        }
    }
    ctx->pc = 0x155174u;
    // 0x155174: 0x0  nop
    ctx->pc = 0x155174u;
    // NOP
label_155178:
    // 0x155178: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x155178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x15517c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x15517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x155180: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x155180u;
    {
        const bool branch_taken_0x155180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155180u;
            // 0x155184: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155180) {
            ctx->pc = 0x155200u;
            goto label_155200;
        }
    }
    ctx->pc = 0x155188u;
label_155188:
    // 0x155188: 0x8eb50014  lw          $s5, 0x14($s5)
    ctx->pc = 0x155188u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x15518c: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15518Cu;
    {
        const bool branch_taken_0x15518c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x155190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15518Cu;
            // 0x155190: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15518c) {
            ctx->pc = 0x155200u;
            goto label_155200;
        }
    }
    ctx->pc = 0x155194u;
label_155194:
    // 0x155194: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x155198: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x155198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15519c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15519Cu;
    {
        const bool branch_taken_0x15519c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15519c) {
            ctx->pc = 0x1551C0u;
            goto label_1551c0;
        }
    }
    ctx->pc = 0x1551A4u;
    // 0x1551a4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1551a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1551a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1551A8u;
    {
        const bool branch_taken_0x1551a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1551a8) {
            ctx->pc = 0x1551B8u;
            goto label_1551b8;
        }
    }
    ctx->pc = 0x1551B0u;
    // 0x1551b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1551B0u;
    {
        const bool branch_taken_0x1551b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1551b0) {
            ctx->pc = 0x1551C8u;
            goto label_1551c8;
        }
    }
    ctx->pc = 0x1551B8u;
label_1551b8:
    // 0x1551b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1551B8u;
    {
        const bool branch_taken_0x1551b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551B8u;
            // 0x1551bc: 0x24120070  addiu       $s2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551b8) {
            ctx->pc = 0x1551C8u;
            goto label_1551c8;
        }
    }
    ctx->pc = 0x1551C0u;
label_1551c0:
    // 0x1551c0: 0x241200e0  addiu       $s2, $zero, 0xE0
    ctx->pc = 0x1551c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1551c4: 0x0  nop
    ctx->pc = 0x1551c4u;
    // NOP
label_1551c8:
    // 0x1551c8: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x1551c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x1551cc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1551ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1551d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1551d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1551d4: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x1551D4u;
    SET_GPR_U32(ctx, 31, 0x1551DCu);
    ctx->pc = 0x1551D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1551D4u;
            // 0x1551d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551DCu; }
        if (ctx->pc != 0x1551DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551DCu; }
        if (ctx->pc != 0x1551DCu) { return; }
    }
    ctx->pc = 0x1551DCu;
label_1551dc:
    // 0x1551dc: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x1551dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x1551e0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1551e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1551e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1551e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1551e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1551ec: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1551f0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1551f4: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x1551f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1551f8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1551F8u;
    {
        const bool branch_taken_0x1551f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1551FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551F8u;
            // 0x1551fc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551f8) {
            ctx->pc = 0x155194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_155194;
        }
    }
    ctx->pc = 0x155200u;
label_155200:
    // 0x155200: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x155200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155204: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x155204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x155208: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x155208u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15520c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15520cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155210: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x155210u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155214: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x155214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155218: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15521c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15521cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15522c: 0x3e00008  jr          $ra
    ctx->pc = 0x15522Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15522Cu;
            // 0x155230: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155234u;
    // 0x155234: 0x0  nop
    ctx->pc = 0x155234u;
    // NOP
    // 0x155238: 0x0  nop
    ctx->pc = 0x155238u;
    // NOP
    // 0x15523c: 0x0  nop
    ctx->pc = 0x15523cu;
    // NOP
}
