#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5860
// Address: 0x2b5860 - 0x2b59c0
void sub_002B5860_0x2b5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5860_0x2b5860");
#endif

    switch (ctx->pc) {
        case 0x2b5860u: goto label_2b5860;
        case 0x2b5864u: goto label_2b5864;
        case 0x2b5868u: goto label_2b5868;
        case 0x2b586cu: goto label_2b586c;
        case 0x2b5870u: goto label_2b5870;
        case 0x2b5874u: goto label_2b5874;
        case 0x2b5878u: goto label_2b5878;
        case 0x2b587cu: goto label_2b587c;
        case 0x2b5880u: goto label_2b5880;
        case 0x2b5884u: goto label_2b5884;
        case 0x2b5888u: goto label_2b5888;
        case 0x2b588cu: goto label_2b588c;
        case 0x2b5890u: goto label_2b5890;
        case 0x2b5894u: goto label_2b5894;
        case 0x2b5898u: goto label_2b5898;
        case 0x2b589cu: goto label_2b589c;
        case 0x2b58a0u: goto label_2b58a0;
        case 0x2b58a4u: goto label_2b58a4;
        case 0x2b58a8u: goto label_2b58a8;
        case 0x2b58acu: goto label_2b58ac;
        case 0x2b58b0u: goto label_2b58b0;
        case 0x2b58b4u: goto label_2b58b4;
        case 0x2b58b8u: goto label_2b58b8;
        case 0x2b58bcu: goto label_2b58bc;
        case 0x2b58c0u: goto label_2b58c0;
        case 0x2b58c4u: goto label_2b58c4;
        case 0x2b58c8u: goto label_2b58c8;
        case 0x2b58ccu: goto label_2b58cc;
        case 0x2b58d0u: goto label_2b58d0;
        case 0x2b58d4u: goto label_2b58d4;
        case 0x2b58d8u: goto label_2b58d8;
        case 0x2b58dcu: goto label_2b58dc;
        case 0x2b58e0u: goto label_2b58e0;
        case 0x2b58e4u: goto label_2b58e4;
        case 0x2b58e8u: goto label_2b58e8;
        case 0x2b58ecu: goto label_2b58ec;
        case 0x2b58f0u: goto label_2b58f0;
        case 0x2b58f4u: goto label_2b58f4;
        case 0x2b58f8u: goto label_2b58f8;
        case 0x2b58fcu: goto label_2b58fc;
        case 0x2b5900u: goto label_2b5900;
        case 0x2b5904u: goto label_2b5904;
        case 0x2b5908u: goto label_2b5908;
        case 0x2b590cu: goto label_2b590c;
        case 0x2b5910u: goto label_2b5910;
        case 0x2b5914u: goto label_2b5914;
        case 0x2b5918u: goto label_2b5918;
        case 0x2b591cu: goto label_2b591c;
        case 0x2b5920u: goto label_2b5920;
        case 0x2b5924u: goto label_2b5924;
        case 0x2b5928u: goto label_2b5928;
        case 0x2b592cu: goto label_2b592c;
        case 0x2b5930u: goto label_2b5930;
        case 0x2b5934u: goto label_2b5934;
        case 0x2b5938u: goto label_2b5938;
        case 0x2b593cu: goto label_2b593c;
        case 0x2b5940u: goto label_2b5940;
        case 0x2b5944u: goto label_2b5944;
        case 0x2b5948u: goto label_2b5948;
        case 0x2b594cu: goto label_2b594c;
        case 0x2b5950u: goto label_2b5950;
        case 0x2b5954u: goto label_2b5954;
        case 0x2b5958u: goto label_2b5958;
        case 0x2b595cu: goto label_2b595c;
        case 0x2b5960u: goto label_2b5960;
        case 0x2b5964u: goto label_2b5964;
        case 0x2b5968u: goto label_2b5968;
        case 0x2b596cu: goto label_2b596c;
        case 0x2b5970u: goto label_2b5970;
        case 0x2b5974u: goto label_2b5974;
        case 0x2b5978u: goto label_2b5978;
        case 0x2b597cu: goto label_2b597c;
        case 0x2b5980u: goto label_2b5980;
        case 0x2b5984u: goto label_2b5984;
        case 0x2b5988u: goto label_2b5988;
        case 0x2b598cu: goto label_2b598c;
        case 0x2b5990u: goto label_2b5990;
        case 0x2b5994u: goto label_2b5994;
        case 0x2b5998u: goto label_2b5998;
        case 0x2b599cu: goto label_2b599c;
        case 0x2b59a0u: goto label_2b59a0;
        case 0x2b59a4u: goto label_2b59a4;
        case 0x2b59a8u: goto label_2b59a8;
        case 0x2b59acu: goto label_2b59ac;
        case 0x2b59b0u: goto label_2b59b0;
        case 0x2b59b4u: goto label_2b59b4;
        case 0x2b59b8u: goto label_2b59b8;
        case 0x2b59bcu: goto label_2b59bc;
        default: break;
    }

    ctx->pc = 0x2b5860u;

label_2b5860:
    // 0x2b5860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b5864:
    // 0x2b5864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b5868:
    // 0x2b5868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b586c:
    // 0x2b586c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b586cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b5870:
    // 0x2b5870: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_2b5874:
    if (ctx->pc == 0x2B5874u) {
        ctx->pc = 0x2B5874u;
            // 0x2b5874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5878u;
        goto label_2b5878;
    }
    ctx->pc = 0x2B5870u;
    {
        const bool branch_taken_0x2b5870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5870) {
            ctx->pc = 0x2B5874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5870u;
            // 0x2b5874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5894u;
            goto label_2b5894;
        }
    }
    ctx->pc = 0x2B5878u;
label_2b5878:
    // 0x2b5878: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2b5878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2b587c:
    // 0x2b587c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b587cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b5880:
    // 0x2b5880: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2b5884:
    if (ctx->pc == 0x2B5884u) {
        ctx->pc = 0x2B5888u;
        goto label_2b5888;
    }
    ctx->pc = 0x2B5880u;
    {
        const bool branch_taken_0x2b5880 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5880) {
            ctx->pc = 0x2B5890u;
            goto label_2b5890;
        }
    }
    ctx->pc = 0x2B5888u;
label_2b5888:
    // 0x2b5888: 0xc0400a8  jal         func_1002A0
label_2b588c:
    if (ctx->pc == 0x2B588Cu) {
        ctx->pc = 0x2B5890u;
        goto label_2b5890;
    }
    ctx->pc = 0x2B5888u;
    SET_GPR_U32(ctx, 31, 0x2B5890u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5890u; }
        if (ctx->pc != 0x2B5890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5890u; }
        if (ctx->pc != 0x2B5890u) { return; }
    }
    ctx->pc = 0x2B5890u;
label_2b5890:
    // 0x2b5890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b5890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5894:
    // 0x2b5894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5898:
    // 0x2b5898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b589c:
    // 0x2b589c: 0x3e00008  jr          $ra
label_2b58a0:
    if (ctx->pc == 0x2B58A0u) {
        ctx->pc = 0x2B58A0u;
            // 0x2b58a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2B58A4u;
        goto label_2b58a4;
    }
    ctx->pc = 0x2B589Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B58A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B589Cu;
            // 0x2b58a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B58A4u;
label_2b58a4:
    // 0x2b58a4: 0x0  nop
    ctx->pc = 0x2b58a4u;
    // NOP
label_2b58a8:
    // 0x2b58a8: 0x0  nop
    ctx->pc = 0x2b58a8u;
    // NOP
label_2b58ac:
    // 0x2b58ac: 0x0  nop
    ctx->pc = 0x2b58acu;
    // NOP
label_2b58b0:
    // 0x2b58b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b58b4:
    // 0x2b58b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b58b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b58b8:
    // 0x2b58b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b58b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b58bc:
    // 0x2b58bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b58bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b58c0:
    // 0x2b58c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b58c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b58c4:
    // 0x2b58c4: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_2b58c8:
    if (ctx->pc == 0x2B58C8u) {
        ctx->pc = 0x2B58C8u;
            // 0x2b58c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B58CCu;
        goto label_2b58cc;
    }
    ctx->pc = 0x2B58C4u;
    {
        const bool branch_taken_0x2b58c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B58C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58C4u;
            // 0x2b58c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58c4) {
            ctx->pc = 0x2B59A0u;
            goto label_2b59a0;
        }
    }
    ctx->pc = 0x2B58CCu;
label_2b58cc:
    // 0x2b58cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2b58ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2b58d0:
    // 0x2b58d0: 0x26020458  addiu       $v0, $s0, 0x458
    ctx->pc = 0x2b58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1112));
label_2b58d4:
    // 0x2b58d4: 0x24633290  addiu       $v1, $v1, 0x3290
    ctx->pc = 0x2b58d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12944));
label_2b58d8:
    // 0x2b58d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b58dc:
    if (ctx->pc == 0x2B58DCu) {
        ctx->pc = 0x2B58DCu;
            // 0x2b58dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2B58E0u;
        goto label_2b58e0;
    }
    ctx->pc = 0x2B58D8u;
    {
        const bool branch_taken_0x2b58d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B58DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58D8u;
            // 0x2b58dc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58d8) {
            ctx->pc = 0x2B58ECu;
            goto label_2b58ec;
        }
    }
    ctx->pc = 0x2B58E0u;
label_2b58e0:
    // 0x2b58e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b58e4:
    // 0x2b58e4: 0x24422a40  addiu       $v0, $v0, 0x2A40
    ctx->pc = 0x2b58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10816));
label_2b58e8:
    // 0x2b58e8: 0xae020458  sw          $v0, 0x458($s0)
    ctx->pc = 0x2b58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1112), GPR_U32(ctx, 2));
label_2b58ec:
    // 0x2b58ec: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2b58ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2b58f0:
    // 0x2b58f0: 0x26040154  addiu       $a0, $s0, 0x154
    ctx->pc = 0x2b58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
label_2b58f4:
    // 0x2b58f4: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x2b58f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
label_2b58f8:
    // 0x2b58f8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b58f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2b58fc:
    // 0x2b58fc: 0xc0407e8  jal         func_101FA0
label_2b5900:
    if (ctx->pc == 0x2B5900u) {
        ctx->pc = 0x2B5900u;
            // 0x2b5900: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x2B5904u;
        goto label_2b5904;
    }
    ctx->pc = 0x2B58FCu;
    SET_GPR_U32(ctx, 31, 0x2B5904u);
    ctx->pc = 0x2B5900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58FCu;
            // 0x2b5900: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5904u; }
        if (ctx->pc != 0x2B5904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5904u; }
        if (ctx->pc != 0x2B5904u) { return; }
    }
    ctx->pc = 0x2B5904u;
label_2b5904:
    // 0x2b5904: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
label_2b5908:
    if (ctx->pc == 0x2B5908u) {
        ctx->pc = 0x2B5908u;
            // 0x2b5908: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2B590Cu;
        goto label_2b590c;
    }
    ctx->pc = 0x2B5904u;
    {
        const bool branch_taken_0x2b5904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5904) {
            ctx->pc = 0x2B5908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5904u;
            // 0x2b5908: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B598Cu;
            goto label_2b598c;
        }
    }
    ctx->pc = 0x2B590Cu;
label_2b590c:
    // 0x2b590c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b590cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2b5910:
    // 0x2b5910: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2b5914:
    // 0x2b5914: 0x24422e80  addiu       $v0, $v0, 0x2E80
    ctx->pc = 0x2b5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
label_2b5918:
    // 0x2b5918: 0x248418a0  addiu       $a0, $a0, 0x18A0
    ctx->pc = 0x2b5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6304));
label_2b591c:
    // 0x2b591c: 0xc0ad6c4  jal         func_2B5B10
label_2b5920:
    if (ctx->pc == 0x2B5920u) {
        ctx->pc = 0x2B5920u;
            // 0x2b5920: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5924u;
        goto label_2b5924;
    }
    ctx->pc = 0x2B591Cu;
    SET_GPR_U32(ctx, 31, 0x2B5924u);
    ctx->pc = 0x2B5920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B591Cu;
            // 0x2b5920: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5924u; }
        if (ctx->pc != 0x2B5924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5924u; }
        if (ctx->pc != 0x2B5924u) { return; }
    }
    ctx->pc = 0x2B5924u;
label_2b5924:
    // 0x2b5924: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x2b5924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2b5928:
    // 0x2b5928: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2b592c:
    if (ctx->pc == 0x2B592Cu) {
        ctx->pc = 0x2B592Cu;
            // 0x2b592c: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x2B5930u;
        goto label_2b5930;
    }
    ctx->pc = 0x2B5928u;
    {
        const bool branch_taken_0x2b5928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5928) {
            ctx->pc = 0x2B592Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5928u;
            // 0x2b592c: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5944u;
            goto label_2b5944;
        }
    }
    ctx->pc = 0x2B5930u;
label_2b5930:
    // 0x2b5930: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b5930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5934:
    // 0x2b5934: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b5934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b5938:
    // 0x2b5938: 0x320f809  jalr        $t9
label_2b593c:
    if (ctx->pc == 0x2B593Cu) {
        ctx->pc = 0x2B593Cu;
            // 0x2b593c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B5940u;
        goto label_2b5940;
    }
    ctx->pc = 0x2B5938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B5940u);
        ctx->pc = 0x2B593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5938u;
            // 0x2b593c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B5940u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B5940u; }
            if (ctx->pc != 0x2B5940u) { return; }
        }
        }
    }
    ctx->pc = 0x2B5940u;
label_2b5940:
    // 0x2b5940: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x2b5940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2b5944:
    // 0x2b5944: 0xc074a08  jal         func_1D2820
label_2b5948:
    if (ctx->pc == 0x2B5948u) {
        ctx->pc = 0x2B594Cu;
        goto label_2b594c;
    }
    ctx->pc = 0x2B5944u;
    SET_GPR_U32(ctx, 31, 0x2B594Cu);
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B594Cu; }
        if (ctx->pc != 0x2B594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B594Cu; }
        if (ctx->pc != 0x2B594Cu) { return; }
    }
    ctx->pc = 0x2B594Cu;
label_2b594c:
    // 0x2b594c: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x2b594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_2b5950:
    // 0x2b5950: 0xc0ad684  jal         func_2B5A10
label_2b5954:
    if (ctx->pc == 0x2B5954u) {
        ctx->pc = 0x2B5954u;
            // 0x2b5954: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B5958u;
        goto label_2b5958;
    }
    ctx->pc = 0x2B5950u;
    SET_GPR_U32(ctx, 31, 0x2B5958u);
    ctx->pc = 0x2B5954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5950u;
            // 0x2b5954: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (runtime->hasFunction(0x2B5A10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5958u; }
        if (ctx->pc != 0x2B5958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5A10_0x2b5a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5958u; }
        if (ctx->pc != 0x2B5958u) { return; }
    }
    ctx->pc = 0x2B5958u;
label_2b5958:
    // 0x2b5958: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2b5958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_2b595c:
    // 0x2b595c: 0xc0ad670  jal         func_2B59C0
label_2b5960:
    if (ctx->pc == 0x2B5960u) {
        ctx->pc = 0x2B5960u;
            // 0x2b5960: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B5964u;
        goto label_2b5964;
    }
    ctx->pc = 0x2B595Cu;
    SET_GPR_U32(ctx, 31, 0x2B5964u);
    ctx->pc = 0x2B5960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B595Cu;
            // 0x2b5960: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5964u; }
        if (ctx->pc != 0x2B5964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5964u; }
        if (ctx->pc != 0x2B5964u) { return; }
    }
    ctx->pc = 0x2B5964u;
label_2b5964:
    // 0x2b5964: 0x26040074  addiu       $a0, $s0, 0x74
    ctx->pc = 0x2b5964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
label_2b5968:
    // 0x2b5968: 0xc0ad670  jal         func_2B59C0
label_2b596c:
    if (ctx->pc == 0x2B596Cu) {
        ctx->pc = 0x2B596Cu;
            // 0x2b596c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B5970u;
        goto label_2b5970;
    }
    ctx->pc = 0x2B5968u;
    SET_GPR_U32(ctx, 31, 0x2B5970u);
    ctx->pc = 0x2B596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5968u;
            // 0x2b596c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5970u; }
        if (ctx->pc != 0x2B5970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5970u; }
        if (ctx->pc != 0x2B5970u) { return; }
    }
    ctx->pc = 0x2B5970u;
label_2b5970:
    // 0x2b5970: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x2b5970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_2b5974:
    // 0x2b5974: 0xc0a8c98  jal         func_2A3260
label_2b5978:
    if (ctx->pc == 0x2B5978u) {
        ctx->pc = 0x2B5978u;
            // 0x2b5978: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B597Cu;
        goto label_2b597c;
    }
    ctx->pc = 0x2B5974u;
    SET_GPR_U32(ctx, 31, 0x2B597Cu);
    ctx->pc = 0x2B5978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5974u;
            // 0x2b5978: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B597Cu; }
        if (ctx->pc != 0x2B597Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B597Cu; }
        if (ctx->pc != 0x2B597Cu) { return; }
    }
    ctx->pc = 0x2B597Cu;
label_2b597c:
    // 0x2b597c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5980:
    // 0x2b5980: 0xc075bf8  jal         func_1D6FE0
label_2b5984:
    if (ctx->pc == 0x2B5984u) {
        ctx->pc = 0x2B5984u;
            // 0x2b5984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5988u;
        goto label_2b5988;
    }
    ctx->pc = 0x2B5980u;
    SET_GPR_U32(ctx, 31, 0x2B5988u);
    ctx->pc = 0x2B5984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5980u;
            // 0x2b5984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5988u; }
        if (ctx->pc != 0x2B5988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5988u; }
        if (ctx->pc != 0x2B5988u) { return; }
    }
    ctx->pc = 0x2B5988u;
label_2b5988:
    // 0x2b5988: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2b5988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2b598c:
    // 0x2b598c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b598cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b5990:
    // 0x2b5990: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2b5994:
    if (ctx->pc == 0x2B5994u) {
        ctx->pc = 0x2B5994u;
            // 0x2b5994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5998u;
        goto label_2b5998;
    }
    ctx->pc = 0x2B5990u;
    {
        const bool branch_taken_0x2b5990 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5990) {
            ctx->pc = 0x2B5994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5990u;
            // 0x2b5994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B59A4u;
            goto label_2b59a4;
        }
    }
    ctx->pc = 0x2B5998u;
label_2b5998:
    // 0x2b5998: 0xc0400a8  jal         func_1002A0
label_2b599c:
    if (ctx->pc == 0x2B599Cu) {
        ctx->pc = 0x2B599Cu;
            // 0x2b599c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B59A0u;
        goto label_2b59a0;
    }
    ctx->pc = 0x2B5998u;
    SET_GPR_U32(ctx, 31, 0x2B59A0u);
    ctx->pc = 0x2B599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5998u;
            // 0x2b599c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59A0u; }
        if (ctx->pc != 0x2B59A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59A0u; }
        if (ctx->pc != 0x2B59A0u) { return; }
    }
    ctx->pc = 0x2B59A0u;
label_2b59a0:
    // 0x2b59a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b59a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b59a4:
    // 0x2b59a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b59a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b59a8:
    // 0x2b59a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b59a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b59ac:
    // 0x2b59ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b59acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b59b0:
    // 0x2b59b0: 0x3e00008  jr          $ra
label_2b59b4:
    if (ctx->pc == 0x2B59B4u) {
        ctx->pc = 0x2B59B4u;
            // 0x2b59b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2B59B8u;
        goto label_2b59b8;
    }
    ctx->pc = 0x2B59B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B59B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59B0u;
            // 0x2b59b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B59B8u;
label_2b59b8:
    // 0x2b59b8: 0x0  nop
    ctx->pc = 0x2b59b8u;
    // NOP
label_2b59bc:
    // 0x2b59bc: 0x0  nop
    ctx->pc = 0x2b59bcu;
    // NOP
}
