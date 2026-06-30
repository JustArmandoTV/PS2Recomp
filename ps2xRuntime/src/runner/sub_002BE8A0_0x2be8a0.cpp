#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BE8A0
// Address: 0x2be8a0 - 0x2be9e0
void sub_002BE8A0_0x2be8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE8A0_0x2be8a0");
#endif

    switch (ctx->pc) {
        case 0x2be8bcu: goto label_2be8bc;
        case 0x2be8dcu: goto label_2be8dc;
        case 0x2be910u: goto label_2be910;
        case 0x2be970u: goto label_2be970;
        case 0x2be97cu: goto label_2be97c;
        case 0x2be988u: goto label_2be988;
        case 0x2be994u: goto label_2be994;
        case 0x2be9a0u: goto label_2be9a0;
        case 0x2be9acu: goto label_2be9ac;
        case 0x2be9c4u: goto label_2be9c4;
        default: break;
    }

    ctx->pc = 0x2be8a0u;

    // 0x2be8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be8a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2be8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2be8a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2be8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2be8ac: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x2be8acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x2be8b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be8b4: 0xc0afb2c  jal         func_2BECB0
    ctx->pc = 0x2BE8B4u;
    SET_GPR_U32(ctx, 31, 0x2BE8BCu);
    ctx->pc = 0x2BE8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE8B4u;
            // 0x2be8b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BECB0u;
    if (runtime->hasFunction(0x2BECB0u)) {
        auto targetFn = runtime->lookupFunction(0x2BECB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8BCu; }
        if (ctx->pc != 0x2BE8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BECB0_0x2becb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8BCu; }
        if (ctx->pc != 0x2BE8BCu) { return; }
    }
    ctx->pc = 0x2BE8BCu;
label_2be8bc:
    // 0x2be8bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2be8c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2be8c4: 0x24631c20  addiu       $v1, $v1, 0x1C20
    ctx->pc = 0x2be8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7200));
    // 0x2be8c8: 0x24421c58  addiu       $v0, $v0, 0x1C58
    ctx->pc = 0x2be8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7256));
    // 0x2be8cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2be8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2be8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8d4: 0xc0afb28  jal         func_2BECA0
    ctx->pc = 0x2BE8D4u;
    SET_GPR_U32(ctx, 31, 0x2BE8DCu);
    ctx->pc = 0x2BE8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE8D4u;
            // 0x2be8d8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BECA0u;
    if (runtime->hasFunction(0x2BECA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8DCu; }
        if (ctx->pc != 0x2BE8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BECA0_0x2beca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE8DCu; }
        if (ctx->pc != 0x2BE8DCu) { return; }
    }
    ctx->pc = 0x2BE8DCu;
label_2be8dc:
    // 0x2be8dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2be8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2be8e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2be8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2be8e4: 0x24424dc0  addiu       $v0, $v0, 0x4DC0
    ctx->pc = 0x2be8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19904));
    // 0x2be8e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2be8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2be8ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2be8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2be8f0: 0x24424df8  addiu       $v0, $v0, 0x4DF8
    ctx->pc = 0x2be8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19960));
    // 0x2be8f4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2be8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2be8f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2be8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be8fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2be8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be904: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE904u;
            // 0x2be908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE90Cu;
    // 0x2be90c: 0x0  nop
    ctx->pc = 0x2be90cu;
    // NOP
label_2be910:
    // 0x2be910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2be918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2be920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be924: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BE924u;
    {
        const bool branch_taken_0x2be924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE924u;
            // 0x2be928: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be924) {
            ctx->pc = 0x2BE9C4u;
            goto label_2be9c4;
        }
    }
    ctx->pc = 0x2BE92Cu;
    // 0x2be92c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2be930: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2be934: 0x24631c20  addiu       $v1, $v1, 0x1C20
    ctx->pc = 0x2be934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7200));
    // 0x2be938: 0x24421c58  addiu       $v0, $v0, 0x1C58
    ctx->pc = 0x2be938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7256));
    // 0x2be93c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2be93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2be940: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BE940u;
    {
        const bool branch_taken_0x2be940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE940u;
            // 0x2be944: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be940) {
            ctx->pc = 0x2BE9ACu;
            goto label_2be9ac;
        }
    }
    ctx->pc = 0x2BE948u;
    // 0x2be948: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2be948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2be94c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2be94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2be950: 0x24631bd0  addiu       $v1, $v1, 0x1BD0
    ctx->pc = 0x2be950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7120));
    // 0x2be954: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2be954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2be958: 0x24421c08  addiu       $v0, $v0, 0x1C08
    ctx->pc = 0x2be958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7176));
    // 0x2be95c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2be95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2be960: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2be960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2be964: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2be964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2be968: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BE968u;
    SET_GPR_U32(ctx, 31, 0x2BE970u);
    ctx->pc = 0x2BE96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE968u;
            // 0x2be96c: 0x24a5eab0  addiu       $a1, $a1, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE970u; }
        if (ctx->pc != 0x2BE970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE970u; }
        if (ctx->pc != 0x2BE970u) { return; }
    }
    ctx->pc = 0x2BE970u;
label_2be970:
    // 0x2be970: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2be970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2be974: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x2BE974u;
    SET_GPR_U32(ctx, 31, 0x2BE97Cu);
    ctx->pc = 0x2BE978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE974u;
            // 0x2be978: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE97Cu; }
        if (ctx->pc != 0x2BE97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE97Cu; }
        if (ctx->pc != 0x2BE97Cu) { return; }
    }
    ctx->pc = 0x2BE97Cu;
label_2be97c:
    // 0x2be97c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2be97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2be980: 0xc0afa90  jal         func_2BEA40
    ctx->pc = 0x2BE980u;
    SET_GPR_U32(ctx, 31, 0x2BE988u);
    ctx->pc = 0x2BE984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE980u;
            // 0x2be984: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BEA40u;
    if (runtime->hasFunction(0x2BEA40u)) {
        auto targetFn = runtime->lookupFunction(0x2BEA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE988u; }
        if (ctx->pc != 0x2BE988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BEA40_0x2bea40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE988u; }
        if (ctx->pc != 0x2BE988u) { return; }
    }
    ctx->pc = 0x2BE988u;
label_2be988:
    // 0x2be988: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2be988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2be98c: 0xc0afa90  jal         func_2BEA40
    ctx->pc = 0x2BE98Cu;
    SET_GPR_U32(ctx, 31, 0x2BE994u);
    ctx->pc = 0x2BE990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE98Cu;
            // 0x2be990: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BEA40u;
    if (runtime->hasFunction(0x2BEA40u)) {
        auto targetFn = runtime->lookupFunction(0x2BEA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE994u; }
        if (ctx->pc != 0x2BE994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BEA40_0x2bea40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE994u; }
        if (ctx->pc != 0x2BE994u) { return; }
    }
    ctx->pc = 0x2BE994u;
label_2be994:
    // 0x2be994: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2be994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2be998: 0xc0afa78  jal         func_2BE9E0
    ctx->pc = 0x2BE998u;
    SET_GPR_U32(ctx, 31, 0x2BE9A0u);
    ctx->pc = 0x2BE99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE998u;
            // 0x2be99c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE9E0u;
    if (runtime->hasFunction(0x2BE9E0u)) {
        auto targetFn = runtime->lookupFunction(0x2BE9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9A0u; }
        if (ctx->pc != 0x2BE9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BE9E0_0x2be9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9A0u; }
        if (ctx->pc != 0x2BE9A0u) { return; }
    }
    ctx->pc = 0x2BE9A0u;
label_2be9a0:
    // 0x2be9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9a4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2BE9A4u;
    SET_GPR_U32(ctx, 31, 0x2BE9ACu);
    ctx->pc = 0x2BE9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE9A4u;
            // 0x2be9a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9ACu; }
        if (ctx->pc != 0x2BE9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9ACu; }
        if (ctx->pc != 0x2BE9ACu) { return; }
    }
    ctx->pc = 0x2BE9ACu;
label_2be9ac:
    // 0x2be9ac: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2be9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2be9b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2be9b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2be9b4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BE9B4u;
    {
        const bool branch_taken_0x2be9b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2be9b4) {
            ctx->pc = 0x2BE9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE9B4u;
            // 0x2be9b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BE9C8u;
            goto label_2be9c8;
        }
    }
    ctx->pc = 0x2BE9BCu;
    // 0x2be9bc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BE9BCu;
    SET_GPR_U32(ctx, 31, 0x2BE9C4u);
    ctx->pc = 0x2BE9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE9BCu;
            // 0x2be9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9C4u; }
        if (ctx->pc != 0x2BE9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE9C4u; }
        if (ctx->pc != 0x2BE9C4u) { return; }
    }
    ctx->pc = 0x2BE9C4u;
label_2be9c4:
    // 0x2be9c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2be9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be9c8:
    // 0x2be9c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be9cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be9d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE9D4u;
            // 0x2be9d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE9DCu;
    // 0x2be9dc: 0x0  nop
    ctx->pc = 0x2be9dcu;
    // NOP
}
