#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193EA0
// Address: 0x193ea0 - 0x193f58
void sub_00193EA0_0x193ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193EA0_0x193ea0");
#endif

    switch (ctx->pc) {
        case 0x193ec4u: goto label_193ec4;
        case 0x193f00u: goto label_193f00;
        case 0x193f08u: goto label_193f08;
        case 0x193f2cu: goto label_193f2c;
        default: break;
    }

    ctx->pc = 0x193ea0u;

    // 0x193ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x193ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193ea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193eac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x193eb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193eb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x193eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193ebc: 0xc06599a  jal         func_196668
    ctx->pc = 0x193EBCu;
    SET_GPR_U32(ctx, 31, 0x193EC4u);
    ctx->pc = 0x193EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193EBCu;
            // 0x193ec0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EC4u; }
        if (ctx->pc != 0x193EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193EC4u; }
        if (ctx->pc != 0x193EC4u) { return; }
    }
    ctx->pc = 0x193EC4u;
label_193ec4:
    // 0x193ec4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x193EC4u;
    {
        const bool branch_taken_0x193ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193EC4u;
            // 0x193ec8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ec4) {
            ctx->pc = 0x193EF0u;
            goto label_193ef0;
        }
    }
    ctx->pc = 0x193ECCu;
    // 0x193ecc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x193eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x193ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ed8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193edc: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x193edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
    // 0x193ee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193ee4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193ee8: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x193EE8u;
    ctx->pc = 0x193EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193EE8u;
            // 0x193eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193EF0u;
label_193ef0:
    // 0x193ef0: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x193ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
    // 0x193ef4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x193ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193ef8: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x193ef8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
    // 0x193efc: 0x0  nop
    ctx->pc = 0x193efcu;
    // NOP
label_193f00:
    // 0x193f00: 0xc0656ca  jal         func_195B28
    ctx->pc = 0x193F00u;
    SET_GPR_U32(ctx, 31, 0x193F08u);
    ctx->pc = 0x193F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193F00u;
            // 0x193f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B28u;
    if (runtime->hasFunction(0x195B28u)) {
        auto targetFn = runtime->lookupFunction(0x195B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F08u; }
        if (ctx->pc != 0x193F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195B28_0x195b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F08u; }
        if (ctx->pc != 0x193F08u) { return; }
    }
    ctx->pc = 0x193F08u;
label_193f08:
    // 0x193f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x193f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193f10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193f14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193F14u;
    {
        const bool branch_taken_0x193f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193F14u;
            // 0x193f18: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f14) {
            ctx->pc = 0x193F34u;
            goto label_193f34;
        }
    }
    ctx->pc = 0x193F1Cu;
    // 0x193f1c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x193F1Cu;
    {
        const bool branch_taken_0x193f1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f1c) {
            ctx->pc = 0x193F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193F1Cu;
            // 0x193f20: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193F34u;
            goto label_193f34;
        }
    }
    ctx->pc = 0x193F24u;
    // 0x193f24: 0xc065754  jal         func_195D50
    ctx->pc = 0x193F24u;
    SET_GPR_U32(ctx, 31, 0x193F2Cu);
    ctx->pc = 0x195D50u;
    if (runtime->hasFunction(0x195D50u)) {
        auto targetFn = runtime->lookupFunction(0x195D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F2Cu; }
        if (ctx->pc != 0x193F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195D50_0x195d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F2Cu; }
        if (ctx->pc != 0x193F2Cu) { return; }
    }
    ctx->pc = 0x193F2Cu;
label_193f2c:
    // 0x193f2c: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x193F2Cu;
    {
        const bool branch_taken_0x193f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x193f2c) {
            ctx->pc = 0x193F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193f00;
        }
    }
    ctx->pc = 0x193F34u;
label_193f34:
    // 0x193f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x193f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193f3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193f48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193f4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193f50: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x193F50u;
    ctx->pc = 0x193F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193F50u;
            // 0x193f54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193F58u;
}
