#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC080
// Address: 0x2fc080 - 0x2fc1c0
void sub_002FC080_0x2fc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC080_0x2fc080");
#endif

    switch (ctx->pc) {
        case 0x2fc0ccu: goto label_2fc0cc;
        case 0x2fc188u: goto label_2fc188;
        case 0x2fc1a0u: goto label_2fc1a0;
        default: break;
    }

    ctx->pc = 0x2fc080u;

    // 0x2fc080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc084: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2fc084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2fc088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc08c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fc08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc094: 0x24423950  addiu       $v0, $v0, 0x3950
    ctx->pc = 0x2fc094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14672));
    // 0x2fc098: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2fc098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2fc09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc0a0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2fc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2fc0a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fc0a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc0a8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2fc0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2fc0ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2fc0acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2fc0b0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2fc0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2fc0b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2fc0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2fc0b8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2fc0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2fc0bc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2fc0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2fc0c0: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2fc0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2fc0c4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2FC0C4u;
    SET_GPR_U32(ctx, 31, 0x2FC0CCu);
    ctx->pc = 0x2FC0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC0C4u;
            // 0x2fc0c8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC0CCu; }
        if (ctx->pc != 0x2FC0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC0CCu; }
        if (ctx->pc != 0x2FC0CCu) { return; }
    }
    ctx->pc = 0x2FC0CCu;
label_2fc0cc:
    // 0x2fc0cc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fc0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fc0d0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fc0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fc0d4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2fc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2fc0d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2fc0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2fc0dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fc0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc0e0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2fc0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2fc0e4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2fc0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2fc0e8: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x2fc0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x2fc0ec: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2fc0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2fc0f0: 0x24a5aae0  addiu       $a1, $a1, -0x5520
    ctx->pc = 0x2fc0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945504));
    // 0x2fc0f4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x2fc0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x2fc0f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2fc0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc0fc: 0xae060048  sw          $a2, 0x48($s0)
    ctx->pc = 0x2fc0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
    // 0x2fc100: 0x2463c350  addiu       $v1, $v1, -0x3CB0
    ctx->pc = 0x2fc100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951760));
    // 0x2fc104: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2fc104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2fc108: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fc108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc10c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fc10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2fc110: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x2fc110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x2fc114: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2fc114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2fc118: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2fc118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2fc11c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2fc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2fc120: 0xa2000064  sb          $zero, 0x64($s0)
    ctx->pc = 0x2fc120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fc124: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2fc124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2fc128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc130: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC130u;
            // 0x2fc134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC138u;
    // 0x2fc138: 0x0  nop
    ctx->pc = 0x2fc138u;
    // NOP
    // 0x2fc13c: 0x0  nop
    ctx->pc = 0x2fc13cu;
    // NOP
    // 0x2fc140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fc148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fc14c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc154: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FC154u;
    {
        const bool branch_taken_0x2fc154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC154u;
            // 0x2fc158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc154) {
            ctx->pc = 0x2FC1A0u;
            goto label_2fc1a0;
        }
    }
    ctx->pc = 0x2FC15Cu;
    // 0x2fc15c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2fc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2fc160: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x2fc160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x2fc164: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC164u;
    {
        const bool branch_taken_0x2fc164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC164u;
            // 0x2fc168: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc164) {
            ctx->pc = 0x2FC188u;
            goto label_2fc188;
        }
    }
    ctx->pc = 0x2FC16Cu;
    // 0x2fc16c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2fc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2fc170: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2fc170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2fc174: 0x24633950  addiu       $v1, $v1, 0x3950
    ctx->pc = 0x2fc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14672));
    // 0x2fc178: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC178u;
    {
        const bool branch_taken_0x2fc178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC178u;
            // 0x2fc17c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc178) {
            ctx->pc = 0x2FC188u;
            goto label_2fc188;
        }
    }
    ctx->pc = 0x2FC180u;
    // 0x2fc180: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2FC180u;
    SET_GPR_U32(ctx, 31, 0x2FC188u);
    ctx->pc = 0x2FC184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC180u;
            // 0x2fc184: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC188u; }
        if (ctx->pc != 0x2FC188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC188u; }
        if (ctx->pc != 0x2FC188u) { return; }
    }
    ctx->pc = 0x2FC188u;
label_2fc188:
    // 0x2fc188: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fc188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2fc18c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fc18cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2fc190: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC190u;
    {
        const bool branch_taken_0x2fc190 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2fc190) {
            ctx->pc = 0x2FC194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC190u;
            // 0x2fc194: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FC1A4u;
            goto label_2fc1a4;
        }
    }
    ctx->pc = 0x2FC198u;
    // 0x2fc198: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2FC198u;
    SET_GPR_U32(ctx, 31, 0x2FC1A0u);
    ctx->pc = 0x2FC19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC198u;
            // 0x2fc19c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC1A0u; }
        if (ctx->pc != 0x2FC1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC1A0u; }
        if (ctx->pc != 0x2FC1A0u) { return; }
    }
    ctx->pc = 0x2FC1A0u;
label_2fc1a0:
    // 0x2fc1a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fc1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc1a4:
    // 0x2fc1a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc1a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc1a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc1ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc1acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC1B0u;
            // 0x2fc1b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC1B8u;
    // 0x2fc1b8: 0x0  nop
    ctx->pc = 0x2fc1b8u;
    // NOP
    // 0x2fc1bc: 0x0  nop
    ctx->pc = 0x2fc1bcu;
    // NOP
}
