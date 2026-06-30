#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001258F8
// Address: 0x1258f8 - 0x125b28
void sub_001258F8_0x1258f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001258F8_0x1258f8");
#endif

    switch (ctx->pc) {
        case 0x125924u: goto label_125924;
        case 0x125930u: goto label_125930;
        case 0x12596cu: goto label_12596c;
        case 0x125980u: goto label_125980;
        case 0x125988u: goto label_125988;
        case 0x125998u: goto label_125998;
        case 0x1259b4u: goto label_1259b4;
        case 0x125aacu: goto label_125aac;
        case 0x125af4u: goto label_125af4;
        default: break;
    }

    ctx->pc = 0x1258f8u;

    // 0x1258f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1258fc: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1258fcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125900: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x125900u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125904: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x125904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x125908: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x125908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12590c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125910: 0xffaf0060  sd          $t7, 0x60($sp)
    ctx->pc = 0x125910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 15));
    // 0x125914: 0xffae0068  sd          $t6, 0x68($sp)
    ctx->pc = 0x125914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 14));
    // 0x125918: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x125918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x12591c: 0xc04955a  jal         func_125568
    ctx->pc = 0x12591Cu;
    SET_GPR_U32(ctx, 31, 0x125924u);
    ctx->pc = 0x125920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12591Cu;
            // 0x125920: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125924u; }
        if (ctx->pc != 0x125924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125924u; }
        if (ctx->pc != 0x125924u) { return; }
    }
    ctx->pc = 0x125924u;
label_125924:
    // 0x125924: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x125928: 0xc04955a  jal         func_125568
    ctx->pc = 0x125928u;
    SET_GPR_U32(ctx, 31, 0x125930u);
    ctx->pc = 0x12592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125928u;
            // 0x12592c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125930u; }
        if (ctx->pc != 0x125930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125930u; }
        if (ctx->pc != 0x125930u) { return; }
    }
    ctx->pc = 0x125930u;
label_125930:
    // 0x125930: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x125930u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125934: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x125934u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125938: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x125938u;
    {
        const bool branch_taken_0x125938 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125938u;
            // 0x12593c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125938) {
            ctx->pc = 0x125968u;
            goto label_125968;
        }
    }
    ctx->pc = 0x125940u;
    // 0x125940: 0x8fad0020  lw          $t5, 0x20($sp)
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125944: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x125944u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125948: 0x55e0001a  bnel        $t7, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x125948u;
    {
        const bool branch_taken_0x125948 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125948) {
            ctx->pc = 0x12594Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125948u;
            // 0x12594c: 0x8fae0024  lw          $t6, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1259B4u;
            goto label_1259b4;
        }
    }
    ctx->pc = 0x125950u;
    // 0x125950: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x125950u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x125954: 0x15e00012  bnez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x125954u;
    {
        const bool branch_taken_0x125954 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125954u;
            // 0x125958: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125954) {
            ctx->pc = 0x1259A0u;
            goto label_1259a0;
        }
    }
    ctx->pc = 0x12595Cu;
    // 0x12595c: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x12595cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x125960: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x125960u;
    {
        const bool branch_taken_0x125960 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125960u;
            // 0x125964: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125960) {
            ctx->pc = 0x125998u;
            goto label_125998;
        }
    }
    ctx->pc = 0x125968u;
label_125968:
    // 0x125968: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x125968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12596c:
    // 0x12596c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12596cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125970: 0x8fae0024  lw          $t6, 0x24($sp)
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x125974: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x125974u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x125978: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x125978u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12597c: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x12597cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
label_125980:
    // 0x125980: 0xc049524  jal         func_125490
    ctx->pc = 0x125980u;
    SET_GPR_U32(ctx, 31, 0x125988u);
    ctx->pc = 0x125490u;
    if (runtime->hasFunction(0x125490u)) {
        auto targetFn = runtime->lookupFunction(0x125490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125988u; }
        if (ctx->pc != 0x125988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125490_0x125490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125988u; }
        if (ctx->pc != 0x125988u) { return; }
    }
    ctx->pc = 0x125988u;
label_125988:
    // 0x125988: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x125988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12598c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12598cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125990: 0x3e00008  jr          $ra
    ctx->pc = 0x125990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125990u;
            // 0x125994: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125998u;
label_125998:
    // 0x125998: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x125998u;
    {
        const bool branch_taken_0x125998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125998u;
            // 0x12599c: 0x25e406d0  addiu       $a0, $t7, 0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 1744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125998) {
            ctx->pc = 0x125980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125980;
        }
    }
    ctx->pc = 0x1259A0u;
label_1259a0:
    // 0x1259a0: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1259A0u;
    {
        const bool branch_taken_0x1259a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1259A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259A0u;
            // 0x1259a4: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259a0) {
            ctx->pc = 0x1259CCu;
            goto label_1259cc;
        }
    }
    ctx->pc = 0x1259A8u;
    // 0x1259a8: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1259A8u;
    {
        const bool branch_taken_0x1259a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259A8u;
            // 0x1259ac: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259a8) {
            ctx->pc = 0x125998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125998;
        }
    }
    ctx->pc = 0x1259B0u;
    // 0x1259b0: 0x8fae0024  lw          $t6, 0x24($sp)
    ctx->pc = 0x1259b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1259b4:
    // 0x1259b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1259b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1259b8: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x1259b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1259bc: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x1259bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x1259c0: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x1259c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1259c4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1259C4u;
    {
        const bool branch_taken_0x1259c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259C4u;
            // 0x1259c8: 0xafaf0024  sw          $t7, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259c4) {
            ctx->pc = 0x125980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125980;
        }
    }
    ctx->pc = 0x1259CCu;
label_1259cc:
    // 0x1259cc: 0x11e0ffe7  beqz        $t7, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1259CCu;
    {
        const bool branch_taken_0x1259cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259CCu;
            // 0x1259d0: 0x8faf0004  lw          $t7, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259cc) {
            ctx->pc = 0x12596Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12596c;
        }
    }
    ctx->pc = 0x1259D4u;
    // 0x1259d4: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x1259d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x1259d8: 0x11e0fff6  beqz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x1259D8u;
    {
        const bool branch_taken_0x1259d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259D8u;
            // 0x1259dc: 0x8fae0024  lw          $t6, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259d8) {
            ctx->pc = 0x1259B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1259b4;
        }
    }
    ctx->pc = 0x1259E0u;
    // 0x1259e0: 0xdfaf0010  ld          $t7, 0x10($sp)
    ctx->pc = 0x1259e0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1259e4: 0xdfad0030  ld          $t5, 0x30($sp)
    ctx->pc = 0x1259e4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1259e8: 0xf503f  dsra32      $t2, $t7, 0
    ctx->pc = 0x1259e8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1259ec: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1259ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1259f0: 0xd603f  dsra32      $t4, $t5, 0
    ctx->pc = 0x1259f0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1259f4: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1259f4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x1259f8: 0x18f0019  multu       $t4, $t7
    ctx->pc = 0x1259f8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 12) * (uint64_t)GPR_U32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1259fc: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1259fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x125a00: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x125a00u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x125a04: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x125a04u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x125a08: 0x20482d  daddu       $t1, $at, $zero
    ctx->pc = 0x125a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a0c: 0x1aa0019  multu       $t5, $t2
    ctx->pc = 0x125a0cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 13) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125a10: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x125a10u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x125a14: 0x20702d  daddu       $t6, $at, $zero
    ctx->pc = 0x125a14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a18: 0x18a0019  multu       $t4, $t2
    ctx->pc = 0x125a18u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 12) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125a1c: 0x12e702d  daddu       $t6, $t1, $t6
    ctx->pc = 0x125a1cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 14));
    // 0x125a20: 0xe583c  dsll32      $t3, $t6, 0
    ctx->pc = 0x125a20u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) << (32 + 0));
    // 0x125a24: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x125a24u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x125a28: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x125a28u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x125a2c: 0x20602d  daddu       $t4, $at, $zero
    ctx->pc = 0x125a2cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a30: 0x1af0019  multu       $t5, $t7
    ctx->pc = 0x125a30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 13) * (uint64_t)GPR_U32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x125a34: 0x1c9502b  sltu        $t2, $t6, $t1
    ctx->pc = 0x125a34u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x125a38: 0xb483c  dsll32      $t1, $t3, 0
    ctx->pc = 0x125a38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) << (32 + 0));
    // 0x125a3c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x125a3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x125a40: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125a44: 0x1cc702d  daddu       $t6, $t6, $t4
    ctx->pc = 0x125a44u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 12));
    // 0x125a48: 0x8fac0004  lw          $t4, 0x4($sp)
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125a4c: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x125a4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x125a50: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125a54: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x125a54u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x125a58: 0x20682d  daddu       $t5, $at, $zero
    ctx->pc = 0x125a58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a5c: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x125a60: 0x1a9482d  daddu       $t1, $t5, $t1
    ctx->pc = 0x125a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 9));
    // 0x125a64: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x125a64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x125a68: 0x12d682b  sltu        $t5, $t1, $t5
    ctx->pc = 0x125a68u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x125a6c: 0x14d502d  daddu       $t2, $t2, $t5
    ctx->pc = 0x125a6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 13));
    // 0x125a70: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x125a74: 0x18f6026  xor         $t4, $t4, $t7
    ctx->pc = 0x125a74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 15));
    // 0x125a78: 0x14e502d  daddu       $t2, $t2, $t6
    ctx->pc = 0x125a78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 14));
    // 0x125a7c: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x125a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x125a80: 0xc602b  sltu        $t4, $zero, $t4
    ctx->pc = 0x125a80u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x125a84: 0xf78fa  dsrl        $t7, $t7, 3
    ctx->pc = 0x125a84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 3);
    // 0x125a88: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x125a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x125a8c: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x125a8cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x125a90: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x125A90u;
    {
        const bool branch_taken_0x125a90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125A90u;
            // 0x125a94: 0xafac0044  sw          $t4, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a90) {
            ctx->pc = 0x125ADCu;
            goto label_125adc;
        }
    }
    ctx->pc = 0x125A98u;
    // 0x125a98: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x125a98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x125a9c: 0x240cfff8  addiu       $t4, $zero, -0x8
    ctx->pc = 0x125a9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x125aa0: 0xb5ffc  dsll32      $t3, $t3, 31
    ctx->pc = 0x125aa0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 31));
    // 0x125aa4: 0xc60fa  dsrl        $t4, $t4, 3
    ctx->pc = 0x125aa4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> 3);
    // 0x125aa8: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x125aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_125aac:
    // 0x125aac: 0x314e0001  andi        $t6, $t2, 0x1
    ctx->pc = 0x125aacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x125ab0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x125ab0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x125ab4: 0xa507a  dsrl        $t2, $t2, 1
    ctx->pc = 0x125ab4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 1);
    // 0x125ab8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x125ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x125abc: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x125abcu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x125ac0: 0x18a682b  sltu        $t5, $t4, $t2
    ctx->pc = 0x125ac0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x125ac4: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x125AC4u;
    {
        const bool branch_taken_0x125ac4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125AC4u;
            // 0x125ac8: 0xac8f0008  sw          $t7, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ac4) {
            ctx->pc = 0x125AD4u;
            goto label_125ad4;
        }
    }
    ctx->pc = 0x125ACCu;
    // 0x125acc: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x125accu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
    // 0x125ad0: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x125ad0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
label_125ad4:
    // 0x125ad4: 0x55a0fff5  bnel        $t5, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x125AD4u;
    {
        const bool branch_taken_0x125ad4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x125ad4) {
            ctx->pc = 0x125AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125AD4u;
            // 0x125ad8: 0x8c8f0008  lw          $t7, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125AACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125aac;
        }
    }
    ctx->pc = 0x125ADCu;
label_125adc:
    // 0x125adc: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x125adcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x125ae0: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x125ae0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x125ae4: 0x1ea782b  sltu        $t7, $t7, $t2
    ctx->pc = 0x125ae4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x125ae8: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x125AE8u;
    {
        const bool branch_taken_0x125ae8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125AE8u;
            // 0x125aec: 0x240dfff0  addiu       $t5, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125ae8) {
            ctx->pc = 0x125B18u;
            goto label_125b18;
        }
    }
    ctx->pc = 0x125AF0u;
    // 0x125af0: 0xd693a  dsrl        $t5, $t5, 4
    ctx->pc = 0x125af0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 4);
label_125af4:
    // 0x125af4: 0x292e0000  slti        $t6, $t1, 0x0
    ctx->pc = 0x125af4u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x125af8: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x125af8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x125afc: 0xa5078  dsll        $t2, $t2, 1
    ctx->pc = 0x125afcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 1);
    // 0x125b00: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x125b00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x125b04: 0x14e5025  or          $t2, $t2, $t6
    ctx->pc = 0x125b04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 14));
    // 0x125b08: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x125b08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x125b0c: 0x1aa702b  sltu        $t6, $t5, $t2
    ctx->pc = 0x125b0cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x125b10: 0x11c0fff8  beqz        $t6, . + 4 + (-0x8 << 2)
    ctx->pc = 0x125B10u;
    {
        const bool branch_taken_0x125b10 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B10u;
            // 0x125b14: 0xac8f0008  sw          $t7, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b10) {
            ctx->pc = 0x125AF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125af4;
        }
    }
    ctx->pc = 0x125B18u;
label_125b18:
    // 0x125b18: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x125b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125b1c: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x125b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
    // 0x125b20: 0x1000ff97  b           . + 4 + (-0x69 << 2)
    ctx->pc = 0x125B20u;
    {
        const bool branch_taken_0x125b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125B20u;
            // 0x125b24: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125b20) {
            ctx->pc = 0x125980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125980;
        }
    }
    ctx->pc = 0x125B28u;
}
