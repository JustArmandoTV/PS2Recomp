#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5020
// Address: 0x1b5020 - 0x1b50d8
void sub_001B5020_0x1b5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5020_0x1b5020");
#endif

    switch (ctx->pc) {
        case 0x1b505cu: goto label_1b505c;
        case 0x1b509cu: goto label_1b509c;
        default: break;
    }

    ctx->pc = 0x1b5020u;

    // 0x1b5020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b502c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b502cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5030: 0x261108a0  addiu       $s1, $s0, 0x8A0
    ctx->pc = 0x1b5030u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x1b5034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5038: 0x26120d0c  addiu       $s2, $s0, 0xD0C
    ctx->pc = 0x1b5038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3340));
    // 0x1b503c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b503cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b5040: 0x26130ad0  addiu       $s3, $s0, 0xAD0
    ctx->pc = 0x1b5040u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    // 0x1b5044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b5048: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1b5048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b504c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b504cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b5050: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b5050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b5054: 0xc069e74  jal         func_1A79D0
    ctx->pc = 0x1B5054u;
    SET_GPR_U32(ctx, 31, 0x1B505Cu);
    ctx->pc = 0x1B5058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5054u;
            // 0x1b5058: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A79D0u;
    if (runtime->hasFunction(0x1A79D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A79D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B505Cu; }
        if (ctx->pc != 0x1B505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A79D0_0x1a79d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B505Cu; }
        if (ctx->pc != 0x1B505Cu) { return; }
    }
    ctx->pc = 0x1B505Cu;
label_1b505c:
    // 0x1b505c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b505cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1b5060: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1b5060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1b5064: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1b5064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1b5068: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b5068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b506c: 0x26040adc  addiu       $a0, $s0, 0xADC
    ctx->pc = 0x1b506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2780));
    // 0x1b5070: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1b5070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1b5074: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1b5074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1b5078: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1b5078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1b507c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1b507cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1b5080: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1b5080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1b5084: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1b5084u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1b5088: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1b5088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1b508c: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x1b508cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
    // 0x1b5090: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b5090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b5094: 0xc06d9e2  jal         func_1B6788
    ctx->pc = 0x1B5094u;
    SET_GPR_U32(ctx, 31, 0x1B509Cu);
    ctx->pc = 0x1B5098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5094u;
            // 0x1b5098: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6788u;
    if (runtime->hasFunction(0x1B6788u)) {
        auto targetFn = runtime->lookupFunction(0x1B6788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B509Cu; }
        if (ctx->pc != 0x1B509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6788_0x1b6788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B509Cu; }
        if (ctx->pc != 0x1B509Cu) { return; }
    }
    ctx->pc = 0x1B509Cu;
label_1b509c:
    // 0x1b509c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b509cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b50a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50a4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b50a8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1b50a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1b50ac: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1b50acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1b50b0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1b50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1b50b4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1b50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1b50b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b50b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b50bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b50bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b50c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b50c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b50c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b50c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b50c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b50c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b50cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B50CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B50D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50CCu;
            // 0x1b50d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B50D4u;
    // 0x1b50d4: 0x0  nop
    ctx->pc = 0x1b50d4u;
    // NOP
}
