#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051A890
// Address: 0x51a890 - 0x51a9c0
void sub_0051A890_0x51a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051A890_0x51a890");
#endif

    switch (ctx->pc) {
        case 0x51a8c8u: goto label_51a8c8;
        case 0x51a8e8u: goto label_51a8e8;
        case 0x51a8f4u: goto label_51a8f4;
        case 0x51a904u: goto label_51a904;
        case 0x51a910u: goto label_51a910;
        case 0x51a91cu: goto label_51a91c;
        case 0x51a928u: goto label_51a928;
        case 0x51a934u: goto label_51a934;
        case 0x51a940u: goto label_51a940;
        case 0x51a94cu: goto label_51a94c;
        case 0x51a958u: goto label_51a958;
        case 0x51a960u: goto label_51a960;
        case 0x51a994u: goto label_51a994;
        default: break;
    }

    ctx->pc = 0x51a890u;

    // 0x51a890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x51a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x51a894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x51a898: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x51a89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51a89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x51a8a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x51a8a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51a8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51a8a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x51a8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51a8ac: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
    ctx->pc = 0x51A8ACu;
    {
        const bool branch_taken_0x51a8ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51A8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A8ACu;
            // 0x51a8b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51a8ac) {
            ctx->pc = 0x51A994u;
            goto label_51a994;
        }
    }
    ctx->pc = 0x51A8B4u;
    // 0x51a8b4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51a8b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51a8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51a8bc: 0x24425ad8  addiu       $v0, $v0, 0x5AD8
    ctx->pc = 0x51a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23256));
    // 0x51a8c0: 0xc120460  jal         func_481180
    ctx->pc = 0x51A8C0u;
    SET_GPR_U32(ctx, 31, 0x51A8C8u);
    ctx->pc = 0x51A8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A8C0u;
            // 0x51a8c4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481180u;
    if (runtime->hasFunction(0x481180u)) {
        auto targetFn = runtime->lookupFunction(0x481180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A8C8u; }
        if (ctx->pc != 0x51A8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481180_0x481180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A8C8u; }
        if (ctx->pc != 0x51A8C8u) { return; }
    }
    ctx->pc = 0x51A8C8u;
label_51a8c8:
    // 0x51a8c8: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x51a8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x51a8cc: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x51A8CCu;
    {
        const bool branch_taken_0x51a8cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a8cc) {
            ctx->pc = 0x51A960u;
            goto label_51a960;
        }
    }
    ctx->pc = 0x51A8D4u;
    // 0x51a8d4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x51a8d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x51a8d8: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x51A8D8u;
    {
        const bool branch_taken_0x51a8d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a8d8) {
            ctx->pc = 0x51A8DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A8D8u;
            // 0x51a8dc: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A8FCu;
            goto label_51a8fc;
        }
    }
    ctx->pc = 0x51A8E0u;
    // 0x51a8e0: 0xc0aab8c  jal         func_2AAE30
    ctx->pc = 0x51A8E0u;
    SET_GPR_U32(ctx, 31, 0x51A8E8u);
    ctx->pc = 0x2AAE30u;
    if (runtime->hasFunction(0x2AAE30u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A8E8u; }
        if (ctx->pc != 0x51A8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE30_0x2aae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A8E8u; }
        if (ctx->pc != 0x51A8E8u) { return; }
    }
    ctx->pc = 0x51A8E8u;
label_51a8e8:
    // 0x51a8e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51a8ec: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x51A8ECu;
    SET_GPR_U32(ctx, 31, 0x51A8F4u);
    ctx->pc = 0x51A8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A8ECu;
            // 0x51a8f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A8F4u; }
        if (ctx->pc != 0x51A8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A8F4u; }
        if (ctx->pc != 0x51A8F4u) { return; }
    }
    ctx->pc = 0x51A8F4u;
label_51a8f4:
    // 0x51a8f4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x51a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x51a8f8: 0x26640060  addiu       $a0, $s3, 0x60
    ctx->pc = 0x51a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_51a8fc:
    // 0x51a8fc: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A8FCu;
    SET_GPR_U32(ctx, 31, 0x51A904u);
    ctx->pc = 0x51A900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A8FCu;
            // 0x51a900: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A904u; }
        if (ctx->pc != 0x51A904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A904u; }
        if (ctx->pc != 0x51A904u) { return; }
    }
    ctx->pc = 0x51A904u;
label_51a904:
    // 0x51a904: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x51a904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    // 0x51a908: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A908u;
    SET_GPR_U32(ctx, 31, 0x51A910u);
    ctx->pc = 0x51A90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A908u;
            // 0x51a90c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A910u; }
        if (ctx->pc != 0x51A910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A910u; }
        if (ctx->pc != 0x51A910u) { return; }
    }
    ctx->pc = 0x51A910u;
label_51a910:
    // 0x51a910: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x51a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x51a914: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A914u;
    SET_GPR_U32(ctx, 31, 0x51A91Cu);
    ctx->pc = 0x51A918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A914u;
            // 0x51a918: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A91Cu; }
        if (ctx->pc != 0x51A91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A91Cu; }
        if (ctx->pc != 0x51A91Cu) { return; }
    }
    ctx->pc = 0x51A91Cu;
label_51a91c:
    // 0x51a91c: 0x2664003c  addiu       $a0, $s3, 0x3C
    ctx->pc = 0x51a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x51a920: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A920u;
    SET_GPR_U32(ctx, 31, 0x51A928u);
    ctx->pc = 0x51A924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A920u;
            // 0x51a924: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A928u; }
        if (ctx->pc != 0x51A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A928u; }
        if (ctx->pc != 0x51A928u) { return; }
    }
    ctx->pc = 0x51A928u;
label_51a928:
    // 0x51a928: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x51a928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x51a92c: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A92Cu;
    SET_GPR_U32(ctx, 31, 0x51A934u);
    ctx->pc = 0x51A930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A92Cu;
            // 0x51a930: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A934u; }
        if (ctx->pc != 0x51A934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A934u; }
        if (ctx->pc != 0x51A934u) { return; }
    }
    ctx->pc = 0x51A934u;
label_51a934:
    // 0x51a934: 0x26640024  addiu       $a0, $s3, 0x24
    ctx->pc = 0x51a934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x51a938: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A938u;
    SET_GPR_U32(ctx, 31, 0x51A940u);
    ctx->pc = 0x51A93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A938u;
            // 0x51a93c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A940u; }
        if (ctx->pc != 0x51A940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A940u; }
        if (ctx->pc != 0x51A940u) { return; }
    }
    ctx->pc = 0x51A940u;
label_51a940:
    // 0x51a940: 0x26640018  addiu       $a0, $s3, 0x18
    ctx->pc = 0x51a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x51a944: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A944u;
    SET_GPR_U32(ctx, 31, 0x51A94Cu);
    ctx->pc = 0x51A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A944u;
            // 0x51a948: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A94Cu; }
        if (ctx->pc != 0x51A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A94Cu; }
        if (ctx->pc != 0x51A94Cu) { return; }
    }
    ctx->pc = 0x51A94Cu;
label_51a94c:
    // 0x51a94c: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x51a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x51a950: 0xc1204ac  jal         func_4812B0
    ctx->pc = 0x51A950u;
    SET_GPR_U32(ctx, 31, 0x51A958u);
    ctx->pc = 0x51A954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A950u;
            // 0x51a954: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4812B0u;
    if (runtime->hasFunction(0x4812B0u)) {
        auto targetFn = runtime->lookupFunction(0x4812B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A958u; }
        if (ctx->pc != 0x51A958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004812B0_0x4812b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A958u; }
        if (ctx->pc != 0x51A958u) { return; }
    }
    ctx->pc = 0x51A958u;
label_51a958:
    // 0x51a958: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51A958u;
    SET_GPR_U32(ctx, 31, 0x51A960u);
    ctx->pc = 0x51A95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A958u;
            // 0x51a95c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A960u; }
        if (ctx->pc != 0x51A960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A960u; }
        if (ctx->pc != 0x51A960u) { return; }
    }
    ctx->pc = 0x51A960u;
label_51a960:
    // 0x51a960: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x51A960u;
    {
        const bool branch_taken_0x51a960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x51a960) {
            ctx->pc = 0x51A964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A960u;
            // 0x51a964: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A980u;
            goto label_51a980;
        }
    }
    ctx->pc = 0x51A968u;
    // 0x51a968: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51a968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51a96c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51a970: 0x24635ac8  addiu       $v1, $v1, 0x5AC8
    ctx->pc = 0x51a970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23240));
    // 0x51a974: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x51a974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x51a978: 0xac400ec8  sw          $zero, 0xEC8($v0)
    ctx->pc = 0x51a978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3784), GPR_U32(ctx, 0));
    // 0x51a97c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x51a97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_51a980:
    // 0x51a980: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51a980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x51a984: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x51A984u;
    {
        const bool branch_taken_0x51a984 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x51a984) {
            ctx->pc = 0x51A988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51A984u;
            // 0x51a988: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51A998u;
            goto label_51a998;
        }
    }
    ctx->pc = 0x51A98Cu;
    // 0x51a98c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51A98Cu;
    SET_GPR_U32(ctx, 31, 0x51A994u);
    ctx->pc = 0x51A990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51A98Cu;
            // 0x51a990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A994u; }
        if (ctx->pc != 0x51A994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51A994u; }
        if (ctx->pc != 0x51A994u) { return; }
    }
    ctx->pc = 0x51A994u;
label_51a994:
    // 0x51a994: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x51a994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51a998:
    // 0x51a998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51a998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x51a99c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51a99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x51a9a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51a9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x51a9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51a9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51a9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51a9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x51A9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51A9ACu;
            // 0x51a9b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51A9B4u;
    // 0x51a9b4: 0x0  nop
    ctx->pc = 0x51a9b4u;
    // NOP
    // 0x51a9b8: 0x0  nop
    ctx->pc = 0x51a9b8u;
    // NOP
    // 0x51a9bc: 0x0  nop
    ctx->pc = 0x51a9bcu;
    // NOP
}
