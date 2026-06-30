#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00532880
// Address: 0x532880 - 0x532970
void sub_00532880_0x532880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00532880_0x532880");
#endif

    switch (ctx->pc) {
        case 0x532880u: goto label_532880;
        case 0x532884u: goto label_532884;
        case 0x532888u: goto label_532888;
        case 0x53288cu: goto label_53288c;
        case 0x532890u: goto label_532890;
        case 0x532894u: goto label_532894;
        case 0x532898u: goto label_532898;
        case 0x53289cu: goto label_53289c;
        case 0x5328a0u: goto label_5328a0;
        case 0x5328a4u: goto label_5328a4;
        case 0x5328a8u: goto label_5328a8;
        case 0x5328acu: goto label_5328ac;
        case 0x5328b0u: goto label_5328b0;
        case 0x5328b4u: goto label_5328b4;
        case 0x5328b8u: goto label_5328b8;
        case 0x5328bcu: goto label_5328bc;
        case 0x5328c0u: goto label_5328c0;
        case 0x5328c4u: goto label_5328c4;
        case 0x5328c8u: goto label_5328c8;
        case 0x5328ccu: goto label_5328cc;
        case 0x5328d0u: goto label_5328d0;
        case 0x5328d4u: goto label_5328d4;
        case 0x5328d8u: goto label_5328d8;
        case 0x5328dcu: goto label_5328dc;
        case 0x5328e0u: goto label_5328e0;
        case 0x5328e4u: goto label_5328e4;
        case 0x5328e8u: goto label_5328e8;
        case 0x5328ecu: goto label_5328ec;
        case 0x5328f0u: goto label_5328f0;
        case 0x5328f4u: goto label_5328f4;
        case 0x5328f8u: goto label_5328f8;
        case 0x5328fcu: goto label_5328fc;
        case 0x532900u: goto label_532900;
        case 0x532904u: goto label_532904;
        case 0x532908u: goto label_532908;
        case 0x53290cu: goto label_53290c;
        case 0x532910u: goto label_532910;
        case 0x532914u: goto label_532914;
        case 0x532918u: goto label_532918;
        case 0x53291cu: goto label_53291c;
        case 0x532920u: goto label_532920;
        case 0x532924u: goto label_532924;
        case 0x532928u: goto label_532928;
        case 0x53292cu: goto label_53292c;
        case 0x532930u: goto label_532930;
        case 0x532934u: goto label_532934;
        case 0x532938u: goto label_532938;
        case 0x53293cu: goto label_53293c;
        case 0x532940u: goto label_532940;
        case 0x532944u: goto label_532944;
        case 0x532948u: goto label_532948;
        case 0x53294cu: goto label_53294c;
        case 0x532950u: goto label_532950;
        case 0x532954u: goto label_532954;
        case 0x532958u: goto label_532958;
        case 0x53295cu: goto label_53295c;
        case 0x532960u: goto label_532960;
        case 0x532964u: goto label_532964;
        case 0x532968u: goto label_532968;
        case 0x53296cu: goto label_53296c;
        default: break;
    }

    ctx->pc = 0x532880u;

label_532880:
    // 0x532880: 0x248602e4  addiu       $a2, $a0, 0x2E4
    ctx->pc = 0x532880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 740));
label_532884:
    // 0x532884: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x532884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_532888:
    // 0x532888: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x532888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_53288c:
    // 0x53288c: 0x90c3000b  lbu         $v1, 0xB($a2)
    ctx->pc = 0x53288cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 11)));
label_532890:
    // 0x532890: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_532894:
    if (ctx->pc == 0x532894u) {
        ctx->pc = 0x532898u;
        goto label_532898;
    }
    ctx->pc = 0x532890u;
    {
        const bool branch_taken_0x532890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x532890) {
            ctx->pc = 0x5328A0u;
            goto label_5328a0;
        }
    }
    ctx->pc = 0x532898u;
label_532898:
    // 0x532898: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x532898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_53289c:
    // 0x53289c: 0x0  nop
    ctx->pc = 0x53289cu;
    // NOP
label_5328a0:
    // 0x5328a0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x5328a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_5328a4:
    // 0x5328a4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x5328a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_5328a8:
    // 0x5328a8: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
label_5328ac:
    if (ctx->pc == 0x5328ACu) {
        ctx->pc = 0x5328B0u;
        goto label_5328b0;
    }
    ctx->pc = 0x5328A8u;
    {
        const bool branch_taken_0x5328a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x5328a8) {
            ctx->pc = 0x53288Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53288c;
        }
    }
    ctx->pc = 0x5328B0u;
label_5328b0:
    // 0x5328b0: 0x3e00008  jr          $ra
label_5328b4:
    if (ctx->pc == 0x5328B4u) {
        ctx->pc = 0x5328B8u;
        goto label_5328b8;
    }
    ctx->pc = 0x5328B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5328B8u;
label_5328b8:
    // 0x5328b8: 0x0  nop
    ctx->pc = 0x5328b8u;
    // NOP
label_5328bc:
    // 0x5328bc: 0x0  nop
    ctx->pc = 0x5328bcu;
    // NOP
label_5328c0:
    // 0x5328c0: 0x248402e4  addiu       $a0, $a0, 0x2E4
    ctx->pc = 0x5328c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 740));
label_5328c4:
    // 0x5328c4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x5328c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_5328c8:
    // 0x5328c8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x5328c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_5328cc:
    // 0x5328cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x5328ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_5328d0:
    // 0x5328d0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x5328d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_5328d4:
    // 0x5328d4: 0x0  nop
    ctx->pc = 0x5328d4u;
    // NOP
label_5328d8:
    // 0x5328d8: 0x0  nop
    ctx->pc = 0x5328d8u;
    // NOP
label_5328dc:
    // 0x5328dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_5328e0:
    if (ctx->pc == 0x5328E0u) {
        ctx->pc = 0x5328E4u;
        goto label_5328e4;
    }
    ctx->pc = 0x5328DCu;
    {
        const bool branch_taken_0x5328dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5328dc) {
            ctx->pc = 0x5328C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5328c8;
        }
    }
    ctx->pc = 0x5328E4u;
label_5328e4:
    // 0x5328e4: 0x3e00008  jr          $ra
label_5328e8:
    if (ctx->pc == 0x5328E8u) {
        ctx->pc = 0x5328ECu;
        goto label_5328ec;
    }
    ctx->pc = 0x5328E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5328ECu;
label_5328ec:
    // 0x5328ec: 0x0  nop
    ctx->pc = 0x5328ecu;
    // NOP
label_5328f0:
    // 0x5328f0: 0xa01026  xor         $v0, $a1, $zero
    ctx->pc = 0x5328f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
label_5328f4:
    // 0x5328f4: 0x3e00008  jr          $ra
label_5328f8:
    if (ctx->pc == 0x5328F8u) {
        ctx->pc = 0x5328F8u;
            // 0x5328f8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x5328FCu;
        goto label_5328fc;
    }
    ctx->pc = 0x5328F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5328F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5328F4u;
            // 0x5328f8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5328FCu;
label_5328fc:
    // 0x5328fc: 0x0  nop
    ctx->pc = 0x5328fcu;
    // NOP
label_532900:
    // 0x532900: 0x3e00008  jr          $ra
label_532904:
    if (ctx->pc == 0x532904u) {
        ctx->pc = 0x532908u;
        goto label_532908;
    }
    ctx->pc = 0x532900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x532908u;
label_532908:
    // 0x532908: 0x0  nop
    ctx->pc = 0x532908u;
    // NOP
label_53290c:
    // 0x53290c: 0x0  nop
    ctx->pc = 0x53290cu;
    // NOP
label_532910:
    // 0x532910: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x532910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_532914:
    // 0x532914: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x532914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_532918:
    // 0x532918: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x532918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_53291c:
    // 0x53291c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x53291cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_532920:
    // 0x532920: 0x3200008  jr          $t9
label_532924:
    if (ctx->pc == 0x532924u) {
        ctx->pc = 0x532928u;
        goto label_532928;
    }
    ctx->pc = 0x532920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x532928u;
label_532928:
    // 0x532928: 0x0  nop
    ctx->pc = 0x532928u;
    // NOP
label_53292c:
    // 0x53292c: 0x0  nop
    ctx->pc = 0x53292cu;
    // NOP
label_532930:
    // 0x532930: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x532930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_532934:
    // 0x532934: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x532934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_532938:
    // 0x532938: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x532938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_53293c:
    // 0x53293c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x53293cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_532940:
    // 0x532940: 0x3200008  jr          $t9
label_532944:
    if (ctx->pc == 0x532944u) {
        ctx->pc = 0x532948u;
        goto label_532948;
    }
    ctx->pc = 0x532940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x532948u;
label_532948:
    // 0x532948: 0x0  nop
    ctx->pc = 0x532948u;
    // NOP
label_53294c:
    // 0x53294c: 0x0  nop
    ctx->pc = 0x53294cu;
    // NOP
label_532950:
    // 0x532950: 0x3e00008  jr          $ra
label_532954:
    if (ctx->pc == 0x532954u) {
        ctx->pc = 0x532958u;
        goto label_532958;
    }
    ctx->pc = 0x532950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x532958u;
label_532958:
    // 0x532958: 0x0  nop
    ctx->pc = 0x532958u;
    // NOP
label_53295c:
    // 0x53295c: 0x0  nop
    ctx->pc = 0x53295cu;
    // NOP
label_532960:
    // 0x532960: 0x3e00008  jr          $ra
label_532964:
    if (ctx->pc == 0x532964u) {
        ctx->pc = 0x532964u;
            // 0x532964: 0x80820024  lb          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->pc = 0x532968u;
        goto label_532968;
    }
    ctx->pc = 0x532960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x532964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532960u;
            // 0x532964: 0x80820024  lb          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x532968u;
label_532968:
    // 0x532968: 0x0  nop
    ctx->pc = 0x532968u;
    // NOP
label_53296c:
    // 0x53296c: 0x0  nop
    ctx->pc = 0x53296cu;
    // NOP
}
