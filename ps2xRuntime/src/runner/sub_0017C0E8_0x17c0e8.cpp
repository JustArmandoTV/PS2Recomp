#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C0E8
// Address: 0x17c0e8 - 0x17c158
void sub_0017C0E8_0x17c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C0E8_0x17c0e8");
#endif

    switch (ctx->pc) {
        case 0x17c140u: goto label_17c140;
        default: break;
    }

    ctx->pc = 0x17c0e8u;

    // 0x17c0e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c0ec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x17c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x17c0f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17c0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17c0f4: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x17c0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x17c0f8: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x17c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x17c0fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17c100: 0x2610d840  addiu       $s0, $s0, -0x27C0
    ctx->pc = 0x17c100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957120));
    // 0x17c104: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17c104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17c108: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17c108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17c10c: 0x246454c0  addiu       $a0, $v1, 0x54C0
    ctx->pc = 0x17c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
    // 0x17c110: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x17c110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x17c114: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17c114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c118: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x17c118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x17c11c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c120: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x17c120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x17c124: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17c124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c128: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x17c128u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c12c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x17c12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c130: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x17c130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c134: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17c134u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c138: 0xc04410c  jal         func_110430
    ctx->pc = 0x17C138u;
    SET_GPR_U32(ctx, 31, 0x17C140u);
    ctx->pc = 0x17C13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C138u;
            // 0x17c13c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C140u; }
        if (ctx->pc != 0x17C140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C140u; }
        if (ctx->pc != 0x17C140u) { return; }
    }
    ctx->pc = 0x17C140u;
label_17c140:
    // 0x17c140: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c144: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17c148: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17c148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c14c: 0x3e00008  jr          $ra
    ctx->pc = 0x17C14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C14Cu;
            // 0x17c150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C154u;
    // 0x17c154: 0x0  nop
    ctx->pc = 0x17c154u;
    // NOP
}
