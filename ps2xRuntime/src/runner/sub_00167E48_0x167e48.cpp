#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167E48
// Address: 0x167e48 - 0x167f50
void sub_00167E48_0x167e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167E48_0x167e48");
#endif

    switch (ctx->pc) {
        case 0x167ea0u: goto label_167ea0;
        case 0x167eecu: goto label_167eec;
        case 0x167f10u: goto label_167f10;
        default: break;
    }

    ctx->pc = 0x167e48u;

    // 0x167e48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x167e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167e4c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167e50: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x167e50u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167e58: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x167e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167e5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x167e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x167e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x167e64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x167e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x167e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x167e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x167e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x167e74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x167E74u;
    {
        const bool branch_taken_0x167e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167e74) {
            ctx->pc = 0x167E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167E74u;
            // 0x167e78: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x167E7Cu;
            goto label_167e7c;
        }
    }
    ctx->pc = 0x167E7Cu;
label_167e7c:
    // 0x167e7c: 0x4012  mflo        $t0
    ctx->pc = 0x167e7cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x167e80: 0x3810  mfhi        $a3
    ctx->pc = 0x167e80u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x167e84: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x167e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167e88: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x167e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x167e8c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x167E8Cu;
    {
        const bool branch_taken_0x167e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x167e8c) {
            ctx->pc = 0x167E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167E8Cu;
            // 0x167e90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167EA0u;
            goto label_167ea0;
        }
    }
    ctx->pc = 0x167E94u;
    // 0x167e94: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x167E94u;
    {
        const bool branch_taken_0x167e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E94u;
            // 0x167e98: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e94) {
            ctx->pc = 0x167EDCu;
            goto label_167edc;
        }
    }
    ctx->pc = 0x167E9Cu;
    // 0x167e9c: 0x0  nop
    ctx->pc = 0x167e9cu;
    // NOP
label_167ea0:
    // 0x167ea0: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x167ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x167ea4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x167EA4u;
    {
        const bool branch_taken_0x167ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167EA4u;
            // 0x167ea8: 0x2053021  addu        $a2, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ea4) {
            ctx->pc = 0x167EDCu;
            goto label_167edc;
        }
    }
    ctx->pc = 0x167EACu;
    // 0x167eac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x167eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167eb0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x167eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167eb4: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x167eb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167eb8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x167EB8u;
    {
        const bool branch_taken_0x167eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167eb8) {
            ctx->pc = 0x167EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167EB8u;
            // 0x167ebc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x167EC0u;
            goto label_167ec0;
        }
    }
    ctx->pc = 0x167EC0u;
label_167ec0:
    // 0x167ec0: 0x4012  mflo        $t0
    ctx->pc = 0x167ec0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x167ec4: 0x3810  mfhi        $a3
    ctx->pc = 0x167ec4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x167ec8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x167ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ecc: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x167eccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x167ed0: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x167ED0u;
    {
        const bool branch_taken_0x167ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x167ed0) {
            ctx->pc = 0x167ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167ED0u;
            // 0x167ed4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x167EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167ea0;
        }
    }
    ctx->pc = 0x167ED8u;
    // 0x167ed8: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x167ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_167edc:
    // 0x167edc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x167edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x167ee0: 0x2451d138  addiu       $s1, $v0, -0x2EC8
    ctx->pc = 0x167ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955320));
    // 0x167ee4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x167EE4u;
    SET_GPR_U32(ctx, 31, 0x167EECu);
    ctx->pc = 0x167EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167EE4u;
            // 0x167ee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EECu; }
        if (ctx->pc != 0x167EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167EECu; }
        if (ctx->pc != 0x167EECu) { return; }
    }
    ctx->pc = 0x167EECu;
label_167eec:
    // 0x167eec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x167eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167ef0: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x167ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x167ef4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x167ef4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x167ef8: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x167ef8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x167efc: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x167EFCu;
    {
        const bool branch_taken_0x167efc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x167F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167EFCu;
            // 0x167f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167efc) {
            ctx->pc = 0x167F2Cu;
            goto label_167f2c;
        }
    }
    ctx->pc = 0x167F04u;
    // 0x167f04: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x167f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x167f08: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x167f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x167f0c: 0x0  nop
    ctx->pc = 0x167f0cu;
    // NOP
label_167f10:
    // 0x167f10: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x167f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x167f14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x167f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x167f18: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x167f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x167f1c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x167f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x167f20: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x167f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x167f24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x167F24u;
    {
        const bool branch_taken_0x167f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167F24u;
            // 0x167f28: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f24) {
            ctx->pc = 0x167F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167f10;
        }
    }
    ctx->pc = 0x167F2Cu;
label_167f2c:
    // 0x167f2c: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x167f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x167f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x167f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167f38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x167f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167f3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x167f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x167f40: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x167f40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x167f44: 0x3e00008  jr          $ra
    ctx->pc = 0x167F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167F44u;
            // 0x167f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167F4Cu;
    // 0x167f4c: 0x0  nop
    ctx->pc = 0x167f4cu;
    // NOP
}
