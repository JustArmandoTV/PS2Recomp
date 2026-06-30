#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E1910
// Address: 0x4e1910 - 0x4e1970
void sub_004E1910_0x4e1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1910_0x4e1910");
#endif

    switch (ctx->pc) {
        case 0x4e1950u: goto label_4e1950;
        default: break;
    }

    ctx->pc = 0x4e1910u;

    // 0x4e1910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e1910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e1914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e1918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e1918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e191c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e191cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e1920: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4E1920u;
    {
        const bool branch_taken_0x4e1920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e1920) {
            ctx->pc = 0x4E1924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1920u;
            // 0x4e1924: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E1954u;
            goto label_4e1954;
        }
    }
    ctx->pc = 0x4E1928u;
    // 0x4e1928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e1928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e192c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4e192cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4e1930: 0x24423538  addiu       $v0, $v0, 0x3538
    ctx->pc = 0x4e1930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13624));
    // 0x4e1934: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4e1934u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4e1938: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e1938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e193c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e193cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4e1940: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E1940u;
    {
        const bool branch_taken_0x4e1940 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4E1944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E1940u;
            // 0x4e1944: 0xac40aa90  sw          $zero, -0x5570($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e1940) {
            ctx->pc = 0x4E1950u;
            goto label_4e1950;
        }
    }
    ctx->pc = 0x4E1948u;
    // 0x4e1948: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E1948u;
    SET_GPR_U32(ctx, 31, 0x4E1950u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1950u; }
        if (ctx->pc != 0x4E1950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E1950u; }
        if (ctx->pc != 0x4E1950u) { return; }
    }
    ctx->pc = 0x4E1950u;
label_4e1950:
    // 0x4e1950: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e1950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e1954:
    // 0x4e1954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e1954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e1958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e1958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e195c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E195Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E195Cu;
            // 0x4e1960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E1964u;
    // 0x4e1964: 0x0  nop
    ctx->pc = 0x4e1964u;
    // NOP
    // 0x4e1968: 0x0  nop
    ctx->pc = 0x4e1968u;
    // NOP
    // 0x4e196c: 0x0  nop
    ctx->pc = 0x4e196cu;
    // NOP
}
