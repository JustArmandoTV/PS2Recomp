#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C300
// Address: 0x51c300 - 0x51c3b0
void sub_0051C300_0x51c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C300_0x51c300");
#endif

    switch (ctx->pc) {
        case 0x51c390u: goto label_51c390;
        default: break;
    }

    ctx->pc = 0x51c300u;

    // 0x51c300: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c304: 0x24425960  addiu       $v0, $v0, 0x5960
    ctx->pc = 0x51c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22880));
    // 0x51c308: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c30c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c310: 0xac44e3e8  sw          $a0, -0x1C18($v0)
    ctx->pc = 0x51c310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960104), GPR_U32(ctx, 4));
    // 0x51c314: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c318: 0x24425930  addiu       $v0, $v0, 0x5930
    ctx->pc = 0x51c318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22832));
    // 0x51c31c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51c320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51c324: 0xa0820013  sb          $v0, 0x13($a0)
    ctx->pc = 0x51c324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x51c328: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c32c: 0x244258e0  addiu       $v0, $v0, 0x58E0
    ctx->pc = 0x51c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22752));
    // 0x51c330: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c334: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c338: 0x244258ec  addiu       $v0, $v0, 0x58EC
    ctx->pc = 0x51c338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22764));
    // 0x51c33c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c340: 0x3e00008  jr          $ra
    ctx->pc = 0x51C340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C340u;
            // 0x51c344: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C348u;
    // 0x51c348: 0x0  nop
    ctx->pc = 0x51c348u;
    // NOP
    // 0x51c34c: 0x0  nop
    ctx->pc = 0x51c34cu;
    // NOP
    // 0x51c350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c360: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51C360u;
    {
        const bool branch_taken_0x51c360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c360) {
            ctx->pc = 0x51C364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C360u;
            // 0x51c364: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C394u;
            goto label_51c394;
        }
    }
    ctx->pc = 0x51C368u;
    // 0x51c368: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c36c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51c36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c370: 0x24425960  addiu       $v0, $v0, 0x5960
    ctx->pc = 0x51c370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22880));
    // 0x51c374: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51c374u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51c378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c37c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c380: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C380u;
    {
        const bool branch_taken_0x51c380 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C380u;
            // 0x51c384: 0xac40e3e8  sw          $zero, -0x1C18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c380) {
            ctx->pc = 0x51C390u;
            goto label_51c390;
        }
    }
    ctx->pc = 0x51C388u;
    // 0x51c388: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C388u;
    SET_GPR_U32(ctx, 31, 0x51C390u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C390u; }
        if (ctx->pc != 0x51C390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C390u; }
        if (ctx->pc != 0x51C390u) { return; }
    }
    ctx->pc = 0x51C390u;
label_51c390:
    // 0x51c390: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c394:
    // 0x51c394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c39c: 0x3e00008  jr          $ra
    ctx->pc = 0x51C39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C39Cu;
            // 0x51c3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C3A4u;
    // 0x51c3a4: 0x0  nop
    ctx->pc = 0x51c3a4u;
    // NOP
    // 0x51c3a8: 0x0  nop
    ctx->pc = 0x51c3a8u;
    // NOP
    // 0x51c3ac: 0x0  nop
    ctx->pc = 0x51c3acu;
    // NOP
}
