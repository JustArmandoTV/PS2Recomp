#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021F890
// Address: 0x21f890 - 0x21f940
void sub_0021F890_0x21f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F890_0x21f890");
#endif

    switch (ctx->pc) {
        case 0x21f8fcu: goto label_21f8fc;
        case 0x21f910u: goto label_21f910;
        default: break;
    }

    ctx->pc = 0x21f890u;

    // 0x21f890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f894: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21f894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21f898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f89c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21f8a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21f8a4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x21f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x21f8a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21f8ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21f8b0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21f8b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f8b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21f8bc: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x21f8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x21f8c0: 0x2442e990  addiu       $v0, $v0, -0x1670
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
    // 0x21f8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21f8cc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x21f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21f8d0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x21f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x21f8d4: 0xa088001c  sb          $t0, 0x1C($a0)
    ctx->pc = 0x21f8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 8));
    // 0x21f8d8: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x21f8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f8dc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x21f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x21f8e0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x21f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x21f8e4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x21f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x21f8e8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x21f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x21f8ec: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x21f8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x21f8f0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x21f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x21f8f4: 0xc08d42c  jal         func_2350B0
    ctx->pc = 0x21F8F4u;
    SET_GPR_U32(ctx, 31, 0x21F8FCu);
    ctx->pc = 0x21F8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F8F4u;
            // 0x21f8f8: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2350B0u;
    if (runtime->hasFunction(0x2350B0u)) {
        auto targetFn = runtime->lookupFunction(0x2350B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F8FCu; }
        if (ctx->pc != 0x21F8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002350B0_0x2350b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F8FCu; }
        if (ctx->pc != 0x21F8FCu) { return; }
    }
    ctx->pc = 0x21F8FCu;
label_21f8fc:
    // 0x21f8fc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x21f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21f900: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F900u;
    {
        const bool branch_taken_0x21f900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f900) {
            ctx->pc = 0x21F904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F900u;
            // 0x21f904: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F914u;
            goto label_21f914;
        }
    }
    ctx->pc = 0x21F908u;
    // 0x21f908: 0xc08d42c  jal         func_2350B0
    ctx->pc = 0x21F908u;
    SET_GPR_U32(ctx, 31, 0x21F910u);
    ctx->pc = 0x2350B0u;
    if (runtime->hasFunction(0x2350B0u)) {
        auto targetFn = runtime->lookupFunction(0x2350B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F910u; }
        if (ctx->pc != 0x21F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002350B0_0x2350b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F910u; }
        if (ctx->pc != 0x21F910u) { return; }
    }
    ctx->pc = 0x21F910u;
label_21f910:
    // 0x21f910: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x21f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_21f914:
    // 0x21f914: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x21f914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21f918: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F918u;
    {
        const bool branch_taken_0x21f918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f918) {
            ctx->pc = 0x21F91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21F918u;
            // 0x21f91c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21F930u;
            goto label_21f930;
        }
    }
    ctx->pc = 0x21F920u;
    // 0x21f920: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x21f920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x21f924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f928: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x21f928u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x21f92c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21f92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21f930:
    // 0x21f930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f938: 0x3e00008  jr          $ra
    ctx->pc = 0x21F938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F938u;
            // 0x21f93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F940u;
}
