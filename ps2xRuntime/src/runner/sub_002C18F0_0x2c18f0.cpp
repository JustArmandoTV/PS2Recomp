#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C18F0
// Address: 0x2c18f0 - 0x2c1960
void sub_002C18F0_0x2c18f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C18F0_0x2c18f0");
#endif

    switch (ctx->pc) {
        case 0x2c1930u: goto label_2c1930;
        case 0x2c1948u: goto label_2c1948;
        default: break;
    }

    ctx->pc = 0x2c18f0u;

    // 0x2c18f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c18f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c18f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c18f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c18f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c18fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c18fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1904: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C1904u;
    {
        const bool branch_taken_0x2c1904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1904u;
            // 0x2c1908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1904) {
            ctx->pc = 0x2C1948u;
            goto label_2c1948;
        }
    }
    ctx->pc = 0x2C190Cu;
    // 0x2c190c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C190Cu;
    {
        const bool branch_taken_0x2c190c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c190c) {
            ctx->pc = 0x2C1910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C190Cu;
            // 0x2c1910: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1934u;
            goto label_2c1934;
        }
    }
    ctx->pc = 0x2C1914u;
    // 0x2c1914: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1914u;
    {
        const bool branch_taken_0x2c1914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1914) {
            ctx->pc = 0x2C1930u;
            goto label_2c1930;
        }
    }
    ctx->pc = 0x2C191Cu;
    // 0x2c191c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c191cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c1920: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1920u;
    {
        const bool branch_taken_0x2c1920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1920) {
            ctx->pc = 0x2C1930u;
            goto label_2c1930;
        }
    }
    ctx->pc = 0x2C1928u;
    // 0x2c1928: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C1928u;
    SET_GPR_U32(ctx, 31, 0x2C1930u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1930u; }
        if (ctx->pc != 0x2C1930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1930u; }
        if (ctx->pc != 0x2C1930u) { return; }
    }
    ctx->pc = 0x2C1930u;
label_2c1930:
    // 0x2c1930: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c1930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c1934:
    // 0x2c1934: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c1934u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c1938: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1938u;
    {
        const bool branch_taken_0x2c1938 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c1938) {
            ctx->pc = 0x2C193Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1938u;
            // 0x2c193c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C194Cu;
            goto label_2c194c;
        }
    }
    ctx->pc = 0x2C1940u;
    // 0x2c1940: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C1940u;
    SET_GPR_U32(ctx, 31, 0x2C1948u);
    ctx->pc = 0x2C1944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1940u;
            // 0x2c1944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1948u; }
        if (ctx->pc != 0x2C1948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1948u; }
        if (ctx->pc != 0x2C1948u) { return; }
    }
    ctx->pc = 0x2C1948u;
label_2c1948:
    // 0x2c1948: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1948u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c194c:
    // 0x2c194c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c194cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1958: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1958u;
            // 0x2c195c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1960u;
}
