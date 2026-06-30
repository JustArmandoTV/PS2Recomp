#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D878
// Address: 0x11d878 - 0x11d958
void sub_0011D878_0x11d878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D878_0x11d878");
#endif

    switch (ctx->pc) {
        case 0x11d8acu: goto label_11d8ac;
        case 0x11d8b4u: goto label_11d8b4;
        case 0x11d8b8u: goto label_11d8b8;
        case 0x11d8dcu: goto label_11d8dc;
        case 0x11d8fcu: goto label_11d8fc;
        case 0x11d904u: goto label_11d904;
        case 0x11d908u: goto label_11d908;
        case 0x11d914u: goto label_11d914;
        case 0x11d93cu: goto label_11d93c;
        case 0x11d950u: goto label_11d950;
        default: break;
    }

    ctx->pc = 0x11d878u;

    // 0x11d878: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11d878u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11d87c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d87cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d880: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d880u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d888: 0x4683f  dsra32      $t5, $a0, 0
    ctx->pc = 0x11d888u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d88c: 0x3c0e3fe9  lui         $t6, 0x3FE9
    ctx->pc = 0x11d88cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16361 << 16));
    // 0x11d890: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x11d890u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11d894: 0x35ce21fb  ori         $t6, $t6, 0x21FB
    ctx->pc = 0x11d894u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8699);
    // 0x11d898: 0x1cd702a  slt         $t6, $t6, $t5
    ctx->pc = 0x11d898u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11d89c: 0x15c00008  bnez        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D89Cu;
    {
        const bool branch_taken_0x11d89c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D89Cu;
            // 0x11d8a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d89c) {
            ctx->pc = 0x11D8C0u;
            goto label_11d8c0;
        }
    }
    ctx->pc = 0x11D8A4u;
    // 0x11d8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d8a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11d8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d8ac:
    // 0x11d8ac: 0xc046fe2  jal         func_11BF88
    ctx->pc = 0x11D8ACu;
    SET_GPR_U32(ctx, 31, 0x11D8B4u);
    ctx->pc = 0x11BF88u;
    if (runtime->hasFunction(0x11BF88u)) {
        auto targetFn = runtime->lookupFunction(0x11BF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D8B4u; }
        if (ctx->pc != 0x11D8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BF88_0x11bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D8B4u; }
        if (ctx->pc != 0x11D8B4u) { return; }
    }
    ctx->pc = 0x11D8B4u;
label_11d8b4:
    // 0x11d8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11d8b8:
    // 0x11d8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8B8u;
            // 0x11d8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D8C0u;
label_11d8c0:
    // 0x11d8c0: 0x3c0f7fef  lui         $t7, 0x7FEF
    ctx->pc = 0x11d8c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
    // 0x11d8c4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d8c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d8c8: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11d8c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11d8cc: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11D8CCu;
    {
        const bool branch_taken_0x11d8cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d8cc) {
            ctx->pc = 0x11D90Cu;
            goto label_11d90c;
        }
    }
    ctx->pc = 0x11D8D4u;
    // 0x11d8d4: 0xc04652a  jal         func_1194A8
    ctx->pc = 0x11D8D4u;
    SET_GPR_U32(ctx, 31, 0x11D8DCu);
    ctx->pc = 0x11D8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8D4u;
            // 0x11d8d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1194A8u;
    if (runtime->hasFunction(0x1194A8u)) {
        auto targetFn = runtime->lookupFunction(0x1194A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D8DCu; }
        if (ctx->pc != 0x11D8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001194A8_0x1194a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D8DCu; }
        if (ctx->pc != 0x11D8DCu) { return; }
    }
    ctx->pc = 0x11D8DCu;
label_11d8dc:
    // 0x11d8dc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11d8e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11d8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d8e4: 0x104f0017  beq         $v0, $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x11D8E4u;
    {
        const bool branch_taken_0x11d8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11D8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8E4u;
            // 0x11d8e8: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8e4) {
            ctx->pc = 0x11D944u;
            goto label_11d944;
        }
    }
    ctx->pc = 0x11D8ECu;
    // 0x11d8ec: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11D8ECu;
    {
        const bool branch_taken_0x11d8ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8ECu;
            // 0x11d8f0: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8ec) {
            ctx->pc = 0x11D928u;
            goto label_11d928;
        }
    }
    ctx->pc = 0x11D8F4u;
    // 0x11d8f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D8F4u;
    {
        const bool branch_taken_0x11d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8F4u;
            // 0x11d8f8: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8f4) {
            ctx->pc = 0x11D91Cu;
            goto label_11d91c;
        }
    }
    ctx->pc = 0x11D8FCu;
label_11d8fc:
    // 0x11d8fc: 0xc046cbe  jal         func_11B2F8
    ctx->pc = 0x11D8FCu;
    SET_GPR_U32(ctx, 31, 0x11D904u);
    ctx->pc = 0x11D900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8FCu;
            // 0x11d900: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B2F8u;
    if (runtime->hasFunction(0x11B2F8u)) {
        auto targetFn = runtime->lookupFunction(0x11B2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D904u; }
        if (ctx->pc != 0x11D904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B2F8_0x11b2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D904u; }
        if (ctx->pc != 0x11D904u) { return; }
    }
    ctx->pc = 0x11D904u;
label_11d904:
    // 0x11d904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d908:
    // 0x11d908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d90c:
    // 0x11d90c: 0xc049622  jal         func_125888
    ctx->pc = 0x11D90Cu;
    SET_GPR_U32(ctx, 31, 0x11D914u);
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D914u; }
        if (ctx->pc != 0x11D914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D914u; }
        if (ctx->pc != 0x11D914u) { return; }
    }
    ctx->pc = 0x11D914u;
label_11d914:
    // 0x11d914: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11D914u;
    {
        const bool branch_taken_0x11d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D914u;
            // 0x11d918: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d914) {
            ctx->pc = 0x11D8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d8b8;
        }
    }
    ctx->pc = 0x11D91Cu;
label_11d91c:
    // 0x11d91c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d920: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x11D920u;
    {
        const bool branch_taken_0x11d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D920u;
            // 0x11d924: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d920) {
            ctx->pc = 0x11D8ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d8ac;
        }
    }
    ctx->pc = 0x11D928u;
label_11d928:
    // 0x11d928: 0x144ffff4  bne         $v0, $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x11D928u;
    {
        const bool branch_taken_0x11d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11D92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D928u;
            // 0x11d92c: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d928) {
            ctx->pc = 0x11D8FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d8fc;
        }
    }
    ctx->pc = 0x11D930u;
    // 0x11d930: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11d930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d934: 0xc046fe2  jal         func_11BF88
    ctx->pc = 0x11D934u;
    SET_GPR_U32(ctx, 31, 0x11D93Cu);
    ctx->pc = 0x11D938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D934u;
            // 0x11d938: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BF88u;
    if (runtime->hasFunction(0x11BF88u)) {
        auto targetFn = runtime->lookupFunction(0x11BF88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D93Cu; }
        if (ctx->pc != 0x11D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BF88_0x11bf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D93Cu; }
        if (ctx->pc != 0x11D93Cu) { return; }
    }
    ctx->pc = 0x11D93Cu;
label_11d93c:
    // 0x11d93c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x11D93Cu;
    {
        const bool branch_taken_0x11d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D93Cu;
            // 0x11d940: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d93c) {
            ctx->pc = 0x11D908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d908;
        }
    }
    ctx->pc = 0x11D944u;
label_11d944:
    // 0x11d944: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x11d944u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d948: 0xc046cbe  jal         func_11B2F8
    ctx->pc = 0x11D948u;
    SET_GPR_U32(ctx, 31, 0x11D950u);
    ctx->pc = 0x11D94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D948u;
            // 0x11d94c: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B2F8u;
    if (runtime->hasFunction(0x11B2F8u)) {
        auto targetFn = runtime->lookupFunction(0x11B2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D950u; }
        if (ctx->pc != 0x11D950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B2F8_0x11b2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D950u; }
        if (ctx->pc != 0x11D950u) { return; }
    }
    ctx->pc = 0x11D950u;
label_11d950:
    // 0x11d950: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x11D950u;
    {
        const bool branch_taken_0x11d950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D950u;
            // 0x11d954: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d950) {
            ctx->pc = 0x11D8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d8b8;
        }
    }
    ctx->pc = 0x11D958u;
}
