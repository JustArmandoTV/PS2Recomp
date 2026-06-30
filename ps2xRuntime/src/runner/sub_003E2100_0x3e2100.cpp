#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E2100
// Address: 0x3e2100 - 0x3e21c0
void sub_003E2100_0x3e2100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2100_0x3e2100");
#endif

    switch (ctx->pc) {
        case 0x3e2158u: goto label_3e2158;
        case 0x3e2164u: goto label_3e2164;
        case 0x3e2170u: goto label_3e2170;
        case 0x3e2188u: goto label_3e2188;
        case 0x3e219cu: goto label_3e219c;
        default: break;
    }

    ctx->pc = 0x3e2100u;

    // 0x3e2100: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e2100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e2104: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e2104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e2108: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e2108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e210c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e210cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e2110: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e2110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e2114: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e2114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e2118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e2118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e211c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e211cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2120: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e2120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e2124: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e2124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e2128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e2128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e212c: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x3e212cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
    // 0x3e2130: 0x8c52e360  lw          $s2, -0x1CA0($v0)
    ctx->pc = 0x3e2130u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x3e2134: 0x24710084  addiu       $s1, $v1, 0x84
    ctx->pc = 0x3e2134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x3e2138: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3e2138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3e213c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3e213cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e2140: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x3e2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x3e2144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e2144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e2148: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e2148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e214c: 0x8c540008  lw          $s4, 0x8($v0)
    ctx->pc = 0x3e214cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3e2150: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x3E2150u;
    SET_GPR_U32(ctx, 31, 0x3E2158u);
    ctx->pc = 0x3E2154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2150u;
            // 0x3e2154: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2158u; }
        if (ctx->pc != 0x3E2158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2158u; }
        if (ctx->pc != 0x3E2158u) { return; }
    }
    ctx->pc = 0x3E2158u;
label_3e2158:
    // 0x3e2158: 0x26640310  addiu       $a0, $s3, 0x310
    ctx->pc = 0x3e2158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    // 0x3e215c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x3E215Cu;
    SET_GPR_U32(ctx, 31, 0x3E2164u);
    ctx->pc = 0x3E2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E215Cu;
            // 0x3e2160: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2164u; }
        if (ctx->pc != 0x3E2164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2164u; }
        if (ctx->pc != 0x3E2164u) { return; }
    }
    ctx->pc = 0x3E2164u;
label_3e2164:
    // 0x3e2164: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e2164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e2168: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3E2168u;
    SET_GPR_U32(ctx, 31, 0x3E2170u);
    ctx->pc = 0x3E216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2168u;
            // 0x3e216c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2170u; }
        if (ctx->pc != 0x3E2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2170u; }
        if (ctx->pc != 0x3E2170u) { return; }
    }
    ctx->pc = 0x3E2170u;
label_3e2170:
    // 0x3e2170: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3e2170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e2174: 0xc60c0284  lwc1        $f12, 0x284($s0)
    ctx->pc = 0x3e2174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e2178: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3e2178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e217c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2180: 0xc0528ec  jal         func_14A3B0
    ctx->pc = 0x3E2180u;
    SET_GPR_U32(ctx, 31, 0x3E2188u);
    ctx->pc = 0x3E2184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2180u;
            // 0x3e2184: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2188u; }
        if (ctx->pc != 0x3E2188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E2188u; }
        if (ctx->pc != 0x3E2188u) { return; }
    }
    ctx->pc = 0x3E2188u;
label_3e2188:
    // 0x3e2188: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e2188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e218c: 0x26640300  addiu       $a0, $s3, 0x300
    ctx->pc = 0x3e218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x3e2190: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x3e2190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3e2194: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3E2194u;
    SET_GPR_U32(ctx, 31, 0x3E219Cu);
    ctx->pc = 0x3E2198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E2194u;
            // 0x3e2198: 0x24c6a080  addiu       $a2, $a2, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E219Cu; }
        if (ctx->pc != 0x3E219Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E219Cu; }
        if (ctx->pc != 0x3E219Cu) { return; }
    }
    ctx->pc = 0x3E219Cu;
label_3e219c:
    // 0x3e219c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e219cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e21a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e21a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e21a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e21a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e21a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e21a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e21ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e21acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e21b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e21b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e21b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E21B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E21B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E21B4u;
            // 0x3e21b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E21BCu;
    // 0x3e21bc: 0x0  nop
    ctx->pc = 0x3e21bcu;
    // NOP
}
