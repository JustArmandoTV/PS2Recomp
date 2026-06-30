#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CC8D0
// Address: 0x1cc8d0 - 0x1ccb50
void sub_001CC8D0_0x1cc8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC8D0_0x1cc8d0");
#endif

    switch (ctx->pc) {
        case 0x1cc944u: goto label_1cc944;
        case 0x1cc9f4u: goto label_1cc9f4;
        case 0x1ccaa0u: goto label_1ccaa0;
        case 0x1ccb2cu: goto label_1ccb2c;
        default: break;
    }

    ctx->pc = 0x1cc8d0u;

    // 0x1cc8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc8d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cc8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc8d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc8dc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cc8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cc8e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc8e4: 0x30a60080  andi        $a2, $a1, 0x80
    ctx->pc = 0x1cc8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1cc8e8: 0x8e04a70c  lw          $a0, -0x58F4($s0)
    ctx->pc = 0x1cc8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1cc8ec: 0x80830ab7  lb          $v1, 0xAB7($a0)
    ctx->pc = 0x1cc8ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2743)));
    // 0x1cc8f0: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CC8F0u;
    {
        const bool branch_taken_0x1cc8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC8F0u;
            // 0x1cc8f4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8f0) {
            ctx->pc = 0x1CC954u;
            goto label_1cc954;
        }
    }
    ctx->pc = 0x1CC8F8u;
    // 0x1cc8f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc8fc: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x1cc8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1cc900: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC900u;
    {
        const bool branch_taken_0x1cc900 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC900u;
            // 0x1cc904: 0xa0820ab7  sb          $v0, 0xAB7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc900) {
            ctx->pc = 0x1CC948u;
            goto label_1cc948;
        }
    }
    ctx->pc = 0x1CC908u;
    // 0x1cc908: 0x30a4ff00  andi        $a0, $a1, 0xFF00
    ctx->pc = 0x1cc908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1cc90c: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x1cc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1cc910: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x1cc910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1cc914: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1cc914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1cc918: 0x54600  sll         $t0, $a1, 24
    ctx->pc = 0x1cc918u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1cc91c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cc91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cc920: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1cc920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1cc924: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1cc924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1cc928: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1cc928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cc92c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc934: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1cc934u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1cc938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc93c: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CC93Cu;
    SET_GPR_U32(ctx, 31, 0x1CC944u);
    ctx->pc = 0x1CC940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC93Cu;
            // 0x1cc940: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC944u; }
        if (ctx->pc != 0x1CC944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC944u; }
        if (ctx->pc != 0x1CC944u) { return; }
    }
    ctx->pc = 0x1CC944u;
label_1cc944:
    // 0x1cc944: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cc944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc948:
    // 0x1cc948: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cc948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1cc94c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1cc94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc950: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cc950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cc954:
    // 0x1cc954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc958: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc95c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC95Cu;
            // 0x1cc960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CC964u;
    // 0x1cc964: 0x0  nop
    ctx->pc = 0x1cc964u;
    // NOP
    // 0x1cc968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc96c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1cc970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc974: 0x2450a70c  addiu       $s0, $v0, -0x58F4
    ctx->pc = 0x1cc974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
    // 0x1cc978: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc97c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cc97cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc980: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc984: 0x2ce40030  sltiu       $a0, $a3, 0x30
    ctx->pc = 0x1cc984u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1cc988: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cc988u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cc98c: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CC98Cu;
    {
        const bool branch_taken_0x1cc98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC98Cu;
            // 0x1cc990: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc98c) {
            ctx->pc = 0x1CC9FCu;
            goto label_1cc9fc;
        }
    }
    ctx->pc = 0x1CC994u;
    // 0x1cc994: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CC994u;
    {
        const bool branch_taken_0x1cc994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC994u;
            // 0x1cc998: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc994) {
            ctx->pc = 0x1CC9FCu;
            goto label_1cc9fc;
        }
    }
    ctx->pc = 0x1CC99Cu;
    // 0x1cc99c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc9a0: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x1cc9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1cc9a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC9A4u;
    {
        const bool branch_taken_0x1cc9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9A4u;
            // 0x1cc9a8: 0xa0c20ab7  sb          $v0, 0xAB7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9a4) {
            ctx->pc = 0x1CC9B8u;
            goto label_1cc9b8;
        }
    }
    ctx->pc = 0x1CC9ACu;
    // 0x1cc9ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cc9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc9b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC9B0u;
    {
        const bool branch_taken_0x1cc9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9B0u;
            // 0x1cc9b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9b0) {
            ctx->pc = 0x1CC9F8u;
            goto label_1cc9f8;
        }
    }
    ctx->pc = 0x1CC9B8u;
label_1cc9b8:
    // 0x1cc9b8: 0x30a4ff00  andi        $a0, $a1, 0xFF00
    ctx->pc = 0x1cc9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1cc9bc: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x1cc9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1cc9c0: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x1cc9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1cc9c4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1cc9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1cc9c8: 0x54600  sll         $t0, $a1, 24
    ctx->pc = 0x1cc9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1cc9cc: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x1cc9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1cc9d0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1cc9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1cc9d4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1cc9d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1cc9d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1cc9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cc9dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc9e0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1cc9e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1cc9e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc9e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc9ec: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CC9ECu;
    SET_GPR_U32(ctx, 31, 0x1CC9F4u);
    ctx->pc = 0x1CC9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9ECu;
            // 0x1cc9f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9F4u; }
        if (ctx->pc != 0x1CC9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9F4u; }
        if (ctx->pc != 0x1CC9F4u) { return; }
    }
    ctx->pc = 0x1CC9F4u;
label_1cc9f4:
    // 0x1cc9f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cc9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cc9f8:
    // 0x1cc9f8: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cc9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cc9fc:
    // 0x1cc9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cca00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cca04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA04u;
            // 0x1cca08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCA0Cu;
    // 0x1cca0c: 0x0  nop
    ctx->pc = 0x1cca0cu;
    // NOP
    // 0x1cca10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cca14: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1cca18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cca1c: 0x2450a70c  addiu       $s0, $v0, -0x58F4
    ctx->pc = 0x1cca1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
    // 0x1cca20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cca24: 0x2c890030  sltiu       $t1, $a0, 0x30
    ctx->pc = 0x1cca24u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1cca28: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x1cca28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cca2c: 0x81630ab7  lb          $v1, 0xAB7($t3)
    ctx->pc = 0x1cca2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 2743)));
    // 0x1cca30: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CCA30u;
    {
        const bool branch_taken_0x1cca30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA30u;
            // 0x1cca34: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca30) {
            ctx->pc = 0x1CCAA8u;
            goto label_1ccaa8;
        }
    }
    ctx->pc = 0x1CCA38u;
    // 0x1cca38: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CCA38u;
    {
        const bool branch_taken_0x1cca38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA38u;
            // 0x1cca3c: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca38) {
            ctx->pc = 0x1CCAA8u;
            goto label_1ccaa8;
        }
    }
    ctx->pc = 0x1CCA40u;
    // 0x1cca40: 0x24a3fff8  addiu       $v1, $a1, -0x8
    ctx->pc = 0x1cca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x1cca44: 0x2c630008  sltiu       $v1, $v1, 0x8
    ctx->pc = 0x1cca44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cca48: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CCA48u;
    {
        const bool branch_taken_0x1cca48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA48u;
            // 0x1cca4c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca48) {
            ctx->pc = 0x1CCAA8u;
            goto label_1ccaa8;
        }
    }
    ctx->pc = 0x1CCA50u;
    // 0x1cca50: 0x2cc30080  sltiu       $v1, $a2, 0x80
    ctx->pc = 0x1cca50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1cca54: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CCA54u;
    {
        const bool branch_taken_0x1cca54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca54) {
            ctx->pc = 0x1CCA58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA54u;
            // 0x1cca58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCAACu;
            goto label_1ccaac;
        }
    }
    ctx->pc = 0x1CCA5Cu;
    // 0x1cca5c: 0x2ce30080  sltiu       $v1, $a3, 0x80
    ctx->pc = 0x1cca5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1cca60: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCA60u;
    {
        const bool branch_taken_0x1cca60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca60) {
            ctx->pc = 0x1CCA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA60u;
            // 0x1cca64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCAACu;
            goto label_1ccaac;
        }
    }
    ctx->pc = 0x1CCA68u;
    // 0x1cca68: 0x34a800a0  ori         $t0, $a1, 0xA0
    ctx->pc = 0x1cca68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)160);
    // 0x1cca6c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1cca6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1cca70: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x1cca70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1cca74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cca74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca78: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1cca78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cca7c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1cca7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1cca80: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1cca80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1cca84: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x1cca84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1cca88: 0xa16a0ab7  sb          $t2, 0xAB7($t3)
    ctx->pc = 0x1cca88u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2743), (uint8_t)GPR_U32(ctx, 10));
    // 0x1cca8c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1cca8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1cca90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cca90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cca94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cca94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca98: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CCA98u;
    SET_GPR_U32(ctx, 31, 0x1CCAA0u);
    ctx->pc = 0x1CCA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA98u;
            // 0x1cca9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAA0u; }
        if (ctx->pc != 0x1CCAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAA0u; }
        if (ctx->pc != 0x1CCAA0u) { return; }
    }
    ctx->pc = 0x1CCAA0u;
label_1ccaa0:
    // 0x1ccaa0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ccaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccaa4: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1ccaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1ccaa8:
    // 0x1ccaa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccaa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ccaac:
    // 0x1ccaac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAB0u;
            // 0x1ccab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCAB8u;
    // 0x1ccab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccabc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ccabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccac4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1ccac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccacc: 0x30ea0080  andi        $t2, $a3, 0x80
    ctx->pc = 0x1ccaccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x1ccad0: 0x8e04a70c  lw          $a0, -0x58F4($s0)
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ccad4: 0x30a800ff  andi        $t0, $a1, 0xFF
    ctx->pc = 0x1ccad4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ccad8: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x1ccad8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ccadc: 0x80830ab7  lb          $v1, 0xAB7($a0)
    ctx->pc = 0x1ccadcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2743)));
    // 0x1ccae0: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CCAE0u;
    {
        const bool branch_taken_0x1ccae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAE0u;
            // 0x1ccae4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccae0) {
            ctx->pc = 0x1CCB3Cu;
            goto label_1ccb3c;
        }
    }
    ctx->pc = 0x1CCAE8u;
    // 0x1ccae8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ccae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccaec: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ccaf0: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x1CCAF0u;
    {
        const bool branch_taken_0x1ccaf0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAF0u;
            // 0x1ccaf4: 0xa0820ab7  sb          $v0, 0xAB7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2743), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaf0) {
            ctx->pc = 0x1CCB30u;
            goto label_1ccb30;
        }
    }
    ctx->pc = 0x1CCAF8u;
    // 0x1ccaf8: 0x30e4ff00  andi        $a0, $a3, 0xFF00
    ctx->pc = 0x1ccaf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x1ccafc: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x1ccafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1ccb00: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1ccb04: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ccb08: 0x73600  sll         $a2, $a3, 24
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1ccb0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccb0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb10: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1ccb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1ccb14: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1ccb14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1ccb18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ccb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ccb1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ccb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccb20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ccb20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1ccb24: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CCB24u;
    SET_GPR_U32(ctx, 31, 0x1CCB2Cu);
    ctx->pc = 0x1CCB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB24u;
            // 0x1ccb28: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB2Cu; }
        if (ctx->pc != 0x1CCB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB2Cu; }
        if (ctx->pc != 0x1CCB2Cu) { return; }
    }
    ctx->pc = 0x1CCB2Cu;
label_1ccb2c:
    // 0x1ccb2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ccb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb30:
    // 0x1ccb30: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1ccb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
    // 0x1ccb34: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1ccb34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb38: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1ccb38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1ccb3c:
    // 0x1ccb3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccb3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccb40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccb44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB44u;
            // 0x1ccb48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCB4Cu;
    // 0x1ccb4c: 0x0  nop
    ctx->pc = 0x1ccb4cu;
    // NOP
}
