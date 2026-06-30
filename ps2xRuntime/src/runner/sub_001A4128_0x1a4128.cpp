#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4128
// Address: 0x1a4128 - 0x1a42e0
void sub_001A4128_0x1a4128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4128_0x1a4128");
#endif

    switch (ctx->pc) {
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a42a4u: goto label_1a42a4;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c4u: goto label_1a42c4;
        default: break;
    }

    ctx->pc = 0x1a4128u;

    // 0x1a4128: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a4128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a412c: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1a4130: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1a4130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1a4134: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a4134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4138: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1a4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1a413c: 0x2448be90  addiu       $t0, $v0, -0x4170
    ctx->pc = 0x1a413cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x1a4140: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1a4140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1a4144: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1a4144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4148: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1a4148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1a414c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a414cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a4150: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1a4150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a4154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4154u;
    {
        const bool branch_taken_0x1a4154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4154u;
            // 0x1a4158: 0x34a50c06  ori         $a1, $a1, 0xC06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3078);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4154) {
            ctx->pc = 0x1A4168u;
            goto label_1a4168;
        }
    }
    ctx->pc = 0x1A415Cu;
    // 0x1a415c: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x1a415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1a4160: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4160u;
    {
        const bool branch_taken_0x1a4160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4160u;
            // 0x1a4164: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4160) {
            ctx->pc = 0x1A4178u;
            goto label_1a4178;
        }
    }
    ctx->pc = 0x1A4168u;
label_1a4168:
    // 0x1a4168: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1A4168u;
    SET_GPR_U32(ctx, 31, 0x1A4170u);
    ctx->pc = 0x1A416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4168u;
            // 0x1a416c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4170u; }
        if (ctx->pc != 0x1A4170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4170u; }
        if (ctx->pc != 0x1A4170u) { return; }
    }
    ctx->pc = 0x1A4170u;
label_1a4170:
    // 0x1a4170: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1A4170u;
    {
        const bool branch_taken_0x1a4170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4170u;
            // 0x1a4174: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4170) {
            ctx->pc = 0x1A42CCu;
            goto label_1a42cc;
        }
    }
    ctx->pc = 0x1A4178u;
label_1a4178:
    // 0x1a4178: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1a4178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a417c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4180: 0x244233a8  addiu       $v0, $v0, 0x33A8
    ctx->pc = 0x1a4180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13224));
    // 0x1a4184: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1a4184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a4188: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1a4188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a418c: 0x6909000f  ldl         $t1, 0xF($t0)
    ctx->pc = 0x1a418cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1a4190: 0x6d090008  ldr         $t1, 0x8($t0)
    ctx->pc = 0x1a4190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1a4194: 0x690a0017  ldl         $t2, 0x17($t0)
    ctx->pc = 0x1a4194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1a4198: 0x6d0a0010  ldr         $t2, 0x10($t0)
    ctx->pc = 0x1a4198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1a419c: 0x8d0b0018  lw          $t3, 0x18($t0)
    ctx->pc = 0x1a419cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1a41a0: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x1a41a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a41a4: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x1a41a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a41a8: 0xb0e90017  sdl         $t1, 0x17($a3)
    ctx->pc = 0x1a41a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a41ac: 0xb4e90010  sdr         $t1, 0x10($a3)
    ctx->pc = 0x1a41acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a41b0: 0xb0ea001f  sdl         $t2, 0x1F($a3)
    ctx->pc = 0x1a41b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a41b4: 0xb4ea0018  sdr         $t2, 0x18($a3)
    ctx->pc = 0x1a41b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a41b8: 0xaceb0020  sw          $t3, 0x20($a3)
    ctx->pc = 0x1a41b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 11));
    // 0x1a41bc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1a41bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1a41c0: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x1a41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x1a41c4: 0x3c11000f  lui         $s1, 0xF
    ctx->pc = 0x1a41c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)15 << 16));
    // 0x1a41c8: 0x36314240  ori         $s1, $s1, 0x4240
    ctx->pc = 0x1a41c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16960);
    // 0x1a41cc: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x1a41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
    // 0x1a41d0: 0x26501080  addiu       $s0, $s2, 0x1080
    ctx->pc = 0x1a41d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4224));
    // 0x1a41d4: 0xace60044  sw          $a2, 0x44($a3)
    ctx->pc = 0x1a41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    // 0x1a41d8: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x1a41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x1a41dc: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1a41dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1a41e0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1a41e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1a41e4: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1a41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
    // 0x1a41e8: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x1a41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x1a41ec: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x1a41ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x1a41f0: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x1a41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x1a41f4: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x1a41f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x1a41f8: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x1a41f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x1a41fc: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A41FCu;
    SET_GPR_U32(ctx, 31, 0x1A4204u);
    ctx->pc = 0x1A4200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A41FCu;
            // 0x1a4200: 0xace00048  sw          $zero, 0x48($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4204u; }
        if (ctx->pc != 0x1A4204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4204u; }
        if (ctx->pc != 0x1A4204u) { return; }
    }
    ctx->pc = 0x1A4204u;
label_1a4204:
    // 0x1a4204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4208: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a4208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a420c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1a420cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1a4210: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4210u;
    SET_GPR_U32(ctx, 31, 0x1A4218u);
    ctx->pc = 0x1A4214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4210u;
            // 0x1a4214: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4218u; }
        if (ctx->pc != 0x1A4218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4218u; }
        if (ctx->pc != 0x1A4218u) { return; }
    }
    ctx->pc = 0x1A4218u;
label_1a4218:
    // 0x1a4218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a421c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1a421cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1a4220: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1a4220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1a4224: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4224u;
    SET_GPR_U32(ctx, 31, 0x1A422Cu);
    ctx->pc = 0x1A4228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4224u;
            // 0x1a4228: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A422Cu; }
        if (ctx->pc != 0x1A422Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A422Cu; }
        if (ctx->pc != 0x1A422Cu) { return; }
    }
    ctx->pc = 0x1A422Cu;
label_1a422c:
    // 0x1a422c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1a422cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a4230: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4234: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1a4234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x1a4238: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4238u;
    SET_GPR_U32(ctx, 31, 0x1A4240u);
    ctx->pc = 0x1A423Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4238u;
            // 0x1a423c: 0xffb10028  sd          $s1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4240u; }
        if (ctx->pc != 0x1A4240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4240u; }
        if (ctx->pc != 0x1A4240u) { return; }
    }
    ctx->pc = 0x1A4240u;
label_1a4240:
    // 0x1a4240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4244: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x1a4244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x1a4248: 0xc06e390  jal         func_1B8E40
    ctx->pc = 0x1A4248u;
    SET_GPR_U32(ctx, 31, 0x1A4250u);
    ctx->pc = 0x1A424Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4248u;
            // 0x1a424c: 0xffb10038  sd          $s1, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E40u;
    if (runtime->hasFunction(0x1B8E40u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4250u; }
        if (ctx->pc != 0x1A4250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E40_0x1b8e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4250u; }
        if (ctx->pc != 0x1A4250u) { return; }
    }
    ctx->pc = 0x1A4250u;
label_1a4250:
    // 0x1a4250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4254: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A4254u;
    SET_GPR_U32(ctx, 31, 0x1A425Cu);
    ctx->pc = 0x1A4258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4254u;
            // 0x1a4258: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A425Cu; }
        if (ctx->pc != 0x1A425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A425Cu; }
        if (ctx->pc != 0x1A425Cu) { return; }
    }
    ctx->pc = 0x1A425Cu;
label_1a425c:
    // 0x1a425c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4260: 0xc06e3d8  jal         func_1B8F60
    ctx->pc = 0x1A4260u;
    SET_GPR_U32(ctx, 31, 0x1A4268u);
    ctx->pc = 0x1A4264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4260u;
            // 0x1a4264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F60u;
    if (runtime->hasFunction(0x1B8F60u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4268u; }
        if (ctx->pc != 0x1A4268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F60_0x1b8f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4268u; }
        if (ctx->pc != 0x1A4268u) { return; }
    }
    ctx->pc = 0x1A4268u;
label_1a4268:
    // 0x1a4268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a426c: 0xc06e3da  jal         func_1B8F68
    ctx->pc = 0x1A426Cu;
    SET_GPR_U32(ctx, 31, 0x1A4274u);
    ctx->pc = 0x1A4270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A426Cu;
            // 0x1a4270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F68u;
    if (runtime->hasFunction(0x1B8F68u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4274u; }
        if (ctx->pc != 0x1A4274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F68_0x1b8f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4274u; }
        if (ctx->pc != 0x1A4274u) { return; }
    }
    ctx->pc = 0x1A4274u;
label_1a4274:
    // 0x1a4274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4278: 0xc06e3e0  jal         func_1B8F80
    ctx->pc = 0x1A4278u;
    SET_GPR_U32(ctx, 31, 0x1A4280u);
    ctx->pc = 0x1A427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4278u;
            // 0x1a427c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F80u;
    if (runtime->hasFunction(0x1B8F80u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4280u; }
        if (ctx->pc != 0x1A4280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F80_0x1b8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4280u; }
        if (ctx->pc != 0x1A4280u) { return; }
    }
    ctx->pc = 0x1A4280u;
label_1a4280:
    // 0x1a4280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4284: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1A4284u;
    SET_GPR_U32(ctx, 31, 0x1A428Cu);
    ctx->pc = 0x1A4288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4284u;
            // 0x1a4288: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (runtime->hasFunction(0x1B8F98u)) {
        auto targetFn = runtime->lookupFunction(0x1B8F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A428Cu; }
        if (ctx->pc != 0x1A428Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8F98_0x1b8f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A428Cu; }
        if (ctx->pc != 0x1A428Cu) { return; }
    }
    ctx->pc = 0x1A428Cu;
label_1a428c:
    // 0x1a428c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a428cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4290: 0xc06e3ec  jal         func_1B8FB0
    ctx->pc = 0x1A4290u;
    SET_GPR_U32(ctx, 31, 0x1A4298u);
    ctx->pc = 0x1A4294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4290u;
            // 0x1a4294: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FB0u;
    if (runtime->hasFunction(0x1B8FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4298u; }
        if (ctx->pc != 0x1A4298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8FB0_0x1b8fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4298u; }
        if (ctx->pc != 0x1A4298u) { return; }
    }
    ctx->pc = 0x1A4298u;
label_1a4298:
    // 0x1a4298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a429c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A429Cu;
    SET_GPR_U32(ctx, 31, 0x1A42A4u);
    ctx->pc = 0x1A42A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A429Cu;
            // 0x1a42a0: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42A4u; }
        if (ctx->pc != 0x1A42A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42A4u; }
        if (ctx->pc != 0x1A42A4u) { return; }
    }
    ctx->pc = 0x1A42A4u;
label_1a42a4:
    // 0x1a42a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a42a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42a8: 0xc06e3f2  jal         func_1B8FC8
    ctx->pc = 0x1A42A8u;
    SET_GPR_U32(ctx, 31, 0x1A42B0u);
    ctx->pc = 0x1A42ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42A8u;
            // 0x1a42ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FC8u;
    if (runtime->hasFunction(0x1B8FC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B8FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42B0u; }
        if (ctx->pc != 0x1A42B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8FC8_0x1b8fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42B0u; }
        if (ctx->pc != 0x1A42B0u) { return; }
    }
    ctx->pc = 0x1A42B0u;
label_1a42b0:
    // 0x1a42b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a42b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42b4: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1A42B4u;
    SET_GPR_U32(ctx, 31, 0x1A42BCu);
    ctx->pc = 0x1A42B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42B4u;
            // 0x1a42b8: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42BCu; }
        if (ctx->pc != 0x1A42BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42BCu; }
        if (ctx->pc != 0x1A42BCu) { return; }
    }
    ctx->pc = 0x1A42BCu;
label_1a42bc:
    // 0x1a42bc: 0xc0700c4  jal         func_1C0310
    ctx->pc = 0x1A42BCu;
    SET_GPR_U32(ctx, 31, 0x1A42C4u);
    ctx->pc = 0x1A42C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42BCu;
            // 0x1a42c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0310u;
    if (runtime->hasFunction(0x1C0310u)) {
        auto targetFn = runtime->lookupFunction(0x1C0310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42C4u; }
        if (ctx->pc != 0x1A42C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0310_0x1c0310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42C4u; }
        if (ctx->pc != 0x1A42C4u) { return; }
    }
    ctx->pc = 0x1A42C4u;
label_1a42c4:
    // 0x1a42c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a42c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42c8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1a42c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a42cc:
    // 0x1a42cc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1a42ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a42d0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1a42d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a42d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1a42d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a42d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A42D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A42DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42D8u;
            // 0x1a42dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A42E0u;
}
