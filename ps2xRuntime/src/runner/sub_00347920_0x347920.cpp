#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347920
// Address: 0x347920 - 0x347a60
void sub_00347920_0x347920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347920_0x347920");
#endif

    switch (ctx->pc) {
        case 0x34793cu: goto label_34793c;
        case 0x34795cu: goto label_34795c;
        case 0x347990u: goto label_347990;
        case 0x3479f0u: goto label_3479f0;
        case 0x3479fcu: goto label_3479fc;
        case 0x347a08u: goto label_347a08;
        case 0x347a14u: goto label_347a14;
        case 0x347a20u: goto label_347a20;
        case 0x347a2cu: goto label_347a2c;
        case 0x347a44u: goto label_347a44;
        default: break;
    }

    ctx->pc = 0x347920u;

    // 0x347920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347924: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x347924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x347928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34792c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x34792cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x347930: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347934: 0xc0d1ecc  jal         func_347B30
    ctx->pc = 0x347934u;
    SET_GPR_U32(ctx, 31, 0x34793Cu);
    ctx->pc = 0x347938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347934u;
            // 0x347938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347B30u;
    if (runtime->hasFunction(0x347B30u)) {
        auto targetFn = runtime->lookupFunction(0x347B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34793Cu; }
        if (ctx->pc != 0x34793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347B30_0x347b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34793Cu; }
        if (ctx->pc != 0x34793Cu) { return; }
    }
    ctx->pc = 0x34793Cu;
label_34793c:
    // 0x34793c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34793cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x347940: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x347944: 0x246358e0  addiu       $v1, $v1, 0x58E0
    ctx->pc = 0x347944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22752));
    // 0x347948: 0x24425918  addiu       $v0, $v0, 0x5918
    ctx->pc = 0x347948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22808));
    // 0x34794c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34794cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x347950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347954: 0xc0d1d9c  jal         func_347670
    ctx->pc = 0x347954u;
    SET_GPR_U32(ctx, 31, 0x34795Cu);
    ctx->pc = 0x347958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347954u;
            // 0x347958: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347670u;
    if (runtime->hasFunction(0x347670u)) {
        auto targetFn = runtime->lookupFunction(0x347670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34795Cu; }
        if (ctx->pc != 0x34795Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347670_0x347670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34795Cu; }
        if (ctx->pc != 0x34795Cu) { return; }
    }
    ctx->pc = 0x34795Cu;
label_34795c:
    // 0x34795c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x34795cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x347960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x347964: 0x24425820  addiu       $v0, $v0, 0x5820
    ctx->pc = 0x347964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22560));
    // 0x347968: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x347968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34796c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34796cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x347970: 0x24425858  addiu       $v0, $v0, 0x5858
    ctx->pc = 0x347970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22616));
    // 0x347974: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x347974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x347978: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x347978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34797c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34797cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347984: 0x3e00008  jr          $ra
    ctx->pc = 0x347984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347984u;
            // 0x347988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34798Cu;
    // 0x34798c: 0x0  nop
    ctx->pc = 0x34798cu;
    // NOP
label_347990:
    // 0x347990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x347994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x347998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34799c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3479a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3479a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3479a4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3479A4u;
    {
        const bool branch_taken_0x3479a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3479A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3479A4u;
            // 0x3479a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479a4) {
            ctx->pc = 0x347A44u;
            goto label_347a44;
        }
    }
    ctx->pc = 0x3479ACu;
    // 0x3479ac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3479acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3479b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3479b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3479b4: 0x246358e0  addiu       $v1, $v1, 0x58E0
    ctx->pc = 0x3479b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22752));
    // 0x3479b8: 0x24425918  addiu       $v0, $v0, 0x5918
    ctx->pc = 0x3479b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22808));
    // 0x3479bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3479bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3479c0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3479C0u;
    {
        const bool branch_taken_0x3479c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3479C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3479C0u;
            // 0x3479c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479c0) {
            ctx->pc = 0x347A2Cu;
            goto label_347a2c;
        }
    }
    ctx->pc = 0x3479C8u;
    // 0x3479c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3479c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3479cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3479d0: 0x24635890  addiu       $v1, $v1, 0x5890
    ctx->pc = 0x3479d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22672));
    // 0x3479d4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3479d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3479d8: 0x244258c8  addiu       $v0, $v0, 0x58C8
    ctx->pc = 0x3479d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22728));
    // 0x3479dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3479dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3479e0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3479e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3479e4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3479e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3479e8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3479E8u;
    SET_GPR_U32(ctx, 31, 0x3479F0u);
    ctx->pc = 0x3479ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3479E8u;
            // 0x3479ec: 0x24a56a10  addiu       $a1, $a1, 0x6A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3479F0u; }
        if (ctx->pc != 0x3479F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3479F0u; }
        if (ctx->pc != 0x3479F0u) { return; }
    }
    ctx->pc = 0x3479F0u;
label_3479f0:
    // 0x3479f0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3479f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3479f4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x3479F4u;
    SET_GPR_U32(ctx, 31, 0x3479FCu);
    ctx->pc = 0x3479F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3479F4u;
            // 0x3479f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3479FCu; }
        if (ctx->pc != 0x3479FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3479FCu; }
        if (ctx->pc != 0x3479FCu) { return; }
    }
    ctx->pc = 0x3479FCu;
label_3479fc:
    // 0x3479fc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3479fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x347a00: 0xc0d1eb0  jal         func_347AC0
    ctx->pc = 0x347A00u;
    SET_GPR_U32(ctx, 31, 0x347A08u);
    ctx->pc = 0x347A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347A00u;
            // 0x347a04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347AC0u;
    if (runtime->hasFunction(0x347AC0u)) {
        auto targetFn = runtime->lookupFunction(0x347AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A08u; }
        if (ctx->pc != 0x347A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347AC0_0x347ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A08u; }
        if (ctx->pc != 0x347A08u) { return; }
    }
    ctx->pc = 0x347A08u;
label_347a08:
    // 0x347a08: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x347a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x347a0c: 0xc0d1eb0  jal         func_347AC0
    ctx->pc = 0x347A0Cu;
    SET_GPR_U32(ctx, 31, 0x347A14u);
    ctx->pc = 0x347A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347A0Cu;
            // 0x347a10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347AC0u;
    if (runtime->hasFunction(0x347AC0u)) {
        auto targetFn = runtime->lookupFunction(0x347AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A14u; }
        if (ctx->pc != 0x347A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347AC0_0x347ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A14u; }
        if (ctx->pc != 0x347A14u) { return; }
    }
    ctx->pc = 0x347A14u;
label_347a14:
    // 0x347a14: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x347a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x347a18: 0xc0d1e98  jal         func_347A60
    ctx->pc = 0x347A18u;
    SET_GPR_U32(ctx, 31, 0x347A20u);
    ctx->pc = 0x347A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347A18u;
            // 0x347a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347A60u;
    if (runtime->hasFunction(0x347A60u)) {
        auto targetFn = runtime->lookupFunction(0x347A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A20u; }
        if (ctx->pc != 0x347A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347A60_0x347a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A20u; }
        if (ctx->pc != 0x347A20u) { return; }
    }
    ctx->pc = 0x347A20u;
label_347a20:
    // 0x347a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a24: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x347A24u;
    SET_GPR_U32(ctx, 31, 0x347A2Cu);
    ctx->pc = 0x347A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347A24u;
            // 0x347a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A2Cu; }
        if (ctx->pc != 0x347A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A2Cu; }
        if (ctx->pc != 0x347A2Cu) { return; }
    }
    ctx->pc = 0x347A2Cu;
label_347a2c:
    // 0x347a2c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x347a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x347a30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x347a30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x347a34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x347A34u;
    {
        const bool branch_taken_0x347a34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x347a34) {
            ctx->pc = 0x347A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347A34u;
            // 0x347a38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347A48u;
            goto label_347a48;
        }
    }
    ctx->pc = 0x347A3Cu;
    // 0x347a3c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x347A3Cu;
    SET_GPR_U32(ctx, 31, 0x347A44u);
    ctx->pc = 0x347A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347A3Cu;
            // 0x347a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A44u; }
        if (ctx->pc != 0x347A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347A44u; }
        if (ctx->pc != 0x347A44u) { return; }
    }
    ctx->pc = 0x347A44u;
label_347a44:
    // 0x347a44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x347a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347a48:
    // 0x347a48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347a4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347a4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347a54: 0x3e00008  jr          $ra
    ctx->pc = 0x347A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347A54u;
            // 0x347a58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347A5Cu;
    // 0x347a5c: 0x0  nop
    ctx->pc = 0x347a5cu;
    // NOP
}
