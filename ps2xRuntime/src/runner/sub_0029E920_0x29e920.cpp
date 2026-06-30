#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E920
// Address: 0x29e920 - 0x29ea20
void sub_0029E920_0x29e920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E920_0x29e920");
#endif

    switch (ctx->pc) {
        case 0x29e950u: goto label_29e950;
        case 0x29e98cu: goto label_29e98c;
        case 0x29ea10u: goto label_29ea10;
        default: break;
    }

    ctx->pc = 0x29e920u;

    // 0x29e920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29e924: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x29E924u;
    {
        const bool branch_taken_0x29e924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E924u;
            // 0x29e928: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e924) {
            ctx->pc = 0x29E950u;
            goto label_29e950;
        }
    }
    ctx->pc = 0x29E92Cu;
    // 0x29e92c: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x29e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
    // 0x29e930: 0x24a3fff0  addiu       $v1, $a1, -0x10
    ctx->pc = 0x29e930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x29e934: 0x3442beef  ori         $v0, $v0, 0xBEEF
    ctx->pc = 0x29e934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48879);
    // 0x29e938: 0xaca2fff0  sw          $v0, -0x10($a1)
    ctx->pc = 0x29e938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 2));
    // 0x29e93c: 0x8ca2fff4  lw          $v0, -0xC($a1)
    ctx->pc = 0x29e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x29e940: 0x8ca7fff8  lw          $a3, -0x8($a1)
    ctx->pc = 0x29e940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x29e944: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x29e944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29e948: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29E948u;
    SET_GPR_U32(ctx, 31, 0x29E950u);
    ctx->pc = 0x29E94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E948u;
            // 0x29e94c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E950u; }
        if (ctx->pc != 0x29E950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E950u; }
        if (ctx->pc != 0x29E950u) { return; }
    }
    ctx->pc = 0x29E950u;
label_29e950:
    // 0x29e950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e954: 0x3e00008  jr          $ra
    ctx->pc = 0x29E954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E954u;
            // 0x29e958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E95Cu;
    // 0x29e95c: 0x0  nop
    ctx->pc = 0x29e95cu;
    // NOP
    // 0x29e960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29e964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29e968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e970: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29e970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e978: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29e978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e97c: 0x2468021  addu        $s0, $s2, $a2
    ctx->pc = 0x29e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x29e980: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x29e980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29e984: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29E984u;
    SET_GPR_U32(ctx, 31, 0x29E98Cu);
    ctx->pc = 0x29E988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E984u;
            // 0x29e988: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E98Cu; }
        if (ctx->pc != 0x29E98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E98Cu; }
        if (ctx->pc != 0x29E98Cu) { return; }
    }
    ctx->pc = 0x29E98Cu;
label_29e98c:
    // 0x29e98c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x29e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x29e990: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x29e990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29e994: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x29e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x29e998: 0x601827  not         $v1, $v1
    ctx->pc = 0x29e998u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x29e99c: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x29e99cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x29e9a0: 0x3c030234  lui         $v1, 0x234
    ctx->pc = 0x29e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)564 << 16));
    // 0x29e9a4: 0x34645656  ori         $a0, $v1, 0x5656
    ctx->pc = 0x29e9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22102);
    // 0x29e9a8: 0xaca4fff0  sw          $a0, -0x10($a1)
    ctx->pc = 0x29e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 4));
    // 0x29e9ac: 0xa21823  subu        $v1, $a1, $v0
    ctx->pc = 0x29e9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x29e9b0: 0xacb0fff4  sw          $s0, -0xC($a1)
    ctx->pc = 0x29e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), GPR_U32(ctx, 16));
    // 0x29e9b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29e9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9b8: 0xacb1fff8  sw          $s1, -0x8($a1)
    ctx->pc = 0x29e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 17));
    // 0x29e9bc: 0xaca3fffc  sw          $v1, -0x4($a1)
    ctx->pc = 0x29e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 3));
    // 0x29e9c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e9c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e9c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e9c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e9cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E9D0u;
            // 0x29e9d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E9D8u;
    // 0x29e9d8: 0x0  nop
    ctx->pc = 0x29e9d8u;
    // NOP
    // 0x29e9dc: 0x0  nop
    ctx->pc = 0x29e9dcu;
    // NOP
    // 0x29e9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29e9e4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x29E9E4u;
    {
        const bool branch_taken_0x29e9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E9E4u;
            // 0x29e9e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e9e4) {
            ctx->pc = 0x29EA10u;
            goto label_29ea10;
        }
    }
    ctx->pc = 0x29E9ECu;
    // 0x29e9ec: 0x3c02dead  lui         $v0, 0xDEAD
    ctx->pc = 0x29e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57005 << 16));
    // 0x29e9f0: 0x3442beef  ori         $v0, $v0, 0xBEEF
    ctx->pc = 0x29e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48879);
    // 0x29e9f4: 0xaca2fff0  sw          $v0, -0x10($a1)
    ctx->pc = 0x29e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 2));
    // 0x29e9f8: 0x8ca2fff4  lw          $v0, -0xC($a1)
    ctx->pc = 0x29e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x29e9fc: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x29e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x29ea00: 0x8ca7fff8  lw          $a3, -0x8($a1)
    ctx->pc = 0x29ea00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x29ea04: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x29ea04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29ea08: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29EA08u;
    SET_GPR_U32(ctx, 31, 0x29EA10u);
    ctx->pc = 0x29EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA08u;
            // 0x29ea0c: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EA10u; }
        if (ctx->pc != 0x29EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EA10u; }
        if (ctx->pc != 0x29EA10u) { return; }
    }
    ctx->pc = 0x29EA10u;
label_29ea10:
    // 0x29ea10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ea10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x29EA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA14u;
            // 0x29ea18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EA1Cu;
    // 0x29ea1c: 0x0  nop
    ctx->pc = 0x29ea1cu;
    // NOP
}
