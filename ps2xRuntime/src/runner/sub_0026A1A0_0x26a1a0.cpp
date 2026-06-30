#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A1A0
// Address: 0x26a1a0 - 0x26a220
void sub_0026A1A0_0x26a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A1A0_0x26a1a0");
#endif

    switch (ctx->pc) {
        case 0x26a1f4u: goto label_26a1f4;
        default: break;
    }

    ctx->pc = 0x26a1a0u;

    // 0x26a1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a1a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a1a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a1ac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x26a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x26a1b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a1b4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x26a1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x26a1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a1bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x26a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x26a1c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26a1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a1cc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x26a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x26a1d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x26a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x26a1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a1d8: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x26a1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a1dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x26a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x26a1e0: 0x2442f2d0  addiu       $v0, $v0, -0xD30
    ctx->pc = 0x26a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963920));
    // 0x26a1e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x26a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x26a1e8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x26a1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x26a1ec: 0xc0a7a34  jal         func_29E8D0
    ctx->pc = 0x26A1ECu;
    SET_GPR_U32(ctx, 31, 0x26A1F4u);
    ctx->pc = 0x26A1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1ECu;
            // 0x26a1f0: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E8D0u;
    if (runtime->hasFunction(0x29E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x29E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1F4u; }
        if (ctx->pc != 0x26A1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E8D0_0x29e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1F4u; }
        if (ctx->pc != 0x26A1F4u) { return; }
    }
    ctx->pc = 0x26A1F4u;
label_26a1f4:
    // 0x26a1f4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x26a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x26a1f8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x26a1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x26a1fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26a1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a200: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x26a200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x26a204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a20c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a210: 0x3e00008  jr          $ra
    ctx->pc = 0x26A210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A210u;
            // 0x26a214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A218u;
    // 0x26a218: 0x0  nop
    ctx->pc = 0x26a218u;
    // NOP
    // 0x26a21c: 0x0  nop
    ctx->pc = 0x26a21cu;
    // NOP
}
