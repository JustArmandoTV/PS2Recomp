#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CCFB0
// Address: 0x1ccfb0 - 0x1cd078
void sub_001CCFB0_0x1ccfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCFB0_0x1ccfb0");
#endif

    switch (ctx->pc) {
        case 0x1cd008u: goto label_1cd008;
        default: break;
    }

    ctx->pc = 0x1ccfb0u;

    // 0x1ccfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccfb4: 0x3c03a400  lui         $v1, 0xA400
    ctx->pc = 0x1ccfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41984 << 16));
    // 0x1ccfb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccfbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ccfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccfc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ccfc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ccfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ccfcc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ccfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ccfd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ccfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ccfd4: 0x16230022  bne         $s1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CCFD4u;
    {
        const bool branch_taken_0x1ccfd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CCFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFD4u;
            // 0x1ccfd8: 0x32047f00  andi        $a0, $s0, 0x7F00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd4) {
            ctx->pc = 0x1CD060u;
            goto label_1cd060;
        }
    }
    ctx->pc = 0x1CCFDCu;
    // 0x1ccfdc: 0x3c03a470  lui         $v1, 0xA470
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42096 << 16));
    // 0x1ccfe0: 0x3c1200ff  lui         $s2, 0xFF
    ctx->pc = 0x1ccfe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)255 << 16));
    // 0x1ccfe4: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x1ccfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ccfe8: 0x30c2ff00  andi        $v0, $a2, 0xFF00
    ctx->pc = 0x1ccfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1ccfec: 0xd22024  and         $a0, $a2, $s2
    ctx->pc = 0x1ccfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x1ccff0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ccff4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x1ccff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x1ccff8: 0x61e02  srl         $v1, $a2, 24
    ctx->pc = 0x1ccff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1ccffc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ccffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1cd000: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x1CD000u;
    SET_GPR_U32(ctx, 31, 0x1CD008u);
    ctx->pc = 0x1CD004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD000u;
            // 0x1cd004: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD008u; }
        if (ctx->pc != 0x1CD008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD008u; }
        if (ctx->pc != 0x1CD008u) { return; }
    }
    ctx->pc = 0x1CD008u;
label_1cd008:
    // 0x1cd008: 0x3203007f  andi        $v1, $s0, 0x7F
    ctx->pc = 0x1cd008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)127);
    // 0x1cd00c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD00Cu;
    {
        const bool branch_taken_0x1cd00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD00Cu;
            // 0x1cd010: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd00c) {
            ctx->pc = 0x1CD060u;
            goto label_1cd060;
        }
    }
    ctx->pc = 0x1CD014u;
    // 0x1cd014: 0x713021  addu        $a2, $v1, $s1
    ctx->pc = 0x1cd014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1cd018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd01c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1cd01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1cd020: 0xd21824  and         $v1, $a2, $s2
    ctx->pc = 0x1cd020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x1cd024: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1cd024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1cd028: 0x30c2ff00  andi        $v0, $a2, 0xFF00
    ctx->pc = 0x1cd028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1cd02c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1cd02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1cd030: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1cd030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1cd034: 0x62600  sll         $a0, $a2, 24
    ctx->pc = 0x1cd034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1cd038: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1cd038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1cd03c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1cd03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cd040: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1cd040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1cd044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd048: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cd048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cd04c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd04cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd050: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cd050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd054: 0x8073234  j           func_1CC8D0
    ctx->pc = 0x1CD054u;
    ctx->pc = 0x1CD058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD054u;
            // 0x1cd058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CD05Cu;
    // 0x1cd05c: 0x0  nop
    ctx->pc = 0x1cd05cu;
    // NOP
label_1cd060:
    // 0x1cd060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd064: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cd068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd06c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cd06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cd070: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD070u;
            // 0x1cd074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD078u;
}
