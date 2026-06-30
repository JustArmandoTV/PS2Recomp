#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C2F8
// Address: 0x19c2f8 - 0x19c378
void sub_0019C2F8_0x19c2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C2F8_0x19c2f8");
#endif

    switch (ctx->pc) {
        case 0x19c324u: goto label_19c324;
        case 0x19c350u: goto label_19c350;
        case 0x19c35cu: goto label_19c35c;
        default: break;
    }

    ctx->pc = 0x19c2f8u;

    // 0x19c2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c2fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c304: 0x80670c4  j           func_19C310
    ctx->pc = 0x19C304u;
    ctx->pc = 0x19C308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C304u;
            // 0x19c308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C310u;
    goto label_19c310;
    ctx->pc = 0x19C30Cu;
    // 0x19c30c: 0x0  nop
    ctx->pc = 0x19c30cu;
    // NOP
label_19c310:
    // 0x19c310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19c31c: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19C31Cu;
    SET_GPR_U32(ctx, 31, 0x19C324u);
    ctx->pc = 0x19C320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C31Cu;
            // 0x19c320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C324u; }
        if (ctx->pc != 0x19C324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C324u; }
        if (ctx->pc != 0x19C324u) { return; }
    }
    ctx->pc = 0x19C324u;
label_19c324:
    // 0x19c324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c328: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C328u;
    {
        const bool branch_taken_0x19c328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19C32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C328u;
            // 0x19c32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c328) {
            ctx->pc = 0x19C348u;
            goto label_19c348;
        }
    }
    ctx->pc = 0x19C330u;
    // 0x19c330: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19c330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19c334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c338: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c33c: 0x24849548  addiu       $a0, $a0, -0x6AB8
    ctx->pc = 0x19c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939976));
    // 0x19c340: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19C340u;
    ctx->pc = 0x19C344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C340u;
            // 0x19c344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C348u;
label_19c348:
    // 0x19c348: 0xc067080  jal         func_19C200
    ctx->pc = 0x19C348u;
    SET_GPR_U32(ctx, 31, 0x19C350u);
    ctx->pc = 0x19C200u;
    if (runtime->hasFunction(0x19C200u)) {
        auto targetFn = runtime->lookupFunction(0x19C200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C350u; }
        if (ctx->pc != 0x19C350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C200_0x19c200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C350u; }
        if (ctx->pc != 0x19C350u) { return; }
    }
    ctx->pc = 0x19C350u;
label_19c350:
    // 0x19c350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c354: 0xc068242  jal         func_1A0908
    ctx->pc = 0x19C354u;
    SET_GPR_U32(ctx, 31, 0x19C35Cu);
    ctx->pc = 0x19C358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C354u;
            // 0x19c358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0908u;
    if (runtime->hasFunction(0x1A0908u)) {
        auto targetFn = runtime->lookupFunction(0x1A0908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C35Cu; }
        if (ctx->pc != 0x19C35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0908_0x1a0908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C35Cu; }
        if (ctx->pc != 0x19C35Cu) { return; }
    }
    ctx->pc = 0x19C35Cu;
label_19c35c:
    // 0x19c35c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x19c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x19c360: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x19c360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x19c364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19c364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c36c: 0x806011a  j           func_180468
    ctx->pc = 0x19C36Cu;
    ctx->pc = 0x19C370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C36Cu;
            // 0x19c370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180468_0x180468(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C374u;
    // 0x19c374: 0x0  nop
    ctx->pc = 0x19c374u;
    // NOP
}
