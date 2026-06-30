#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002731D0
// Address: 0x2731d0 - 0x273250
void sub_002731D0_0x2731d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002731D0_0x2731d0");
#endif

    switch (ctx->pc) {
        case 0x273220u: goto label_273220;
        case 0x27322cu: goto label_27322c;
        default: break;
    }

    ctx->pc = 0x2731d0u;

    // 0x2731d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2731d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2731d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2731d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2731d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2731d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2731dc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2731dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2731e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2731e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2731e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2731e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2731e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2731e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2731ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2731f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2731f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2731f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2731f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2731f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2731fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2731fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x273200: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x273200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x273204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273208: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x273208u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x27320c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x27320cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x273210: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x273210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
    // 0x273214: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x273214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x273218: 0xc09cc58  jal         func_273160
    ctx->pc = 0x273218u;
    SET_GPR_U32(ctx, 31, 0x273220u);
    ctx->pc = 0x27321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273218u;
            // 0x27321c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273160u;
    if (runtime->hasFunction(0x273160u)) {
        auto targetFn = runtime->lookupFunction(0x273160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273220u; }
        if (ctx->pc != 0x273220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273160_0x273160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273220u; }
        if (ctx->pc != 0x273220u) { return; }
    }
    ctx->pc = 0x273220u;
label_273220:
    // 0x273220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273224: 0xc09cc64  jal         func_273190
    ctx->pc = 0x273224u;
    SET_GPR_U32(ctx, 31, 0x27322Cu);
    ctx->pc = 0x273228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273224u;
            // 0x273228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x273190u;
    if (runtime->hasFunction(0x273190u)) {
        auto targetFn = runtime->lookupFunction(0x273190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27322Cu; }
        if (ctx->pc != 0x27322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00273190_0x273190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27322Cu; }
        if (ctx->pc != 0x27322Cu) { return; }
    }
    ctx->pc = 0x27322Cu;
label_27322c:
    // 0x27322c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27322cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27323c: 0x3e00008  jr          $ra
    ctx->pc = 0x27323Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27323Cu;
            // 0x273240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273244u;
    // 0x273244: 0x0  nop
    ctx->pc = 0x273244u;
    // NOP
    // 0x273248: 0x0  nop
    ctx->pc = 0x273248u;
    // NOP
    // 0x27324c: 0x0  nop
    ctx->pc = 0x27324cu;
    // NOP
}
