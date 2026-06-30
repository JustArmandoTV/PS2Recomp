#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD260
// Address: 0x2ad260 - 0x2ad370
void sub_002AD260_0x2ad260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD260_0x2ad260");
#endif

    switch (ctx->pc) {
        case 0x2ad298u: goto label_2ad298;
        case 0x2ad2a0u: goto label_2ad2a0;
        case 0x2ad304u: goto label_2ad304;
        case 0x2ad30cu: goto label_2ad30c;
        case 0x2ad330u: goto label_2ad330;
        default: break;
    }

    ctx->pc = 0x2ad260u;

    // 0x2ad260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad264: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ad264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ad268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ad268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ad26c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad274: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ad274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad27c: 0x80420c70  lb          $v0, 0xC70($v0)
    ctx->pc = 0x2ad27cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3184)));
    // 0x2ad280: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AD280u;
    {
        const bool branch_taken_0x2ad280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD280u;
            // 0x2ad284: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad280) {
            ctx->pc = 0x2AD2D8u;
            goto label_2ad2d8;
        }
    }
    ctx->pc = 0x2AD288u;
    // 0x2ad288: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2ad288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2ad28c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ad28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ad290: 0xc0ab4e0  jal         func_2AD380
    ctx->pc = 0x2AD290u;
    SET_GPR_U32(ctx, 31, 0x2AD298u);
    ctx->pc = 0x2AD294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD290u;
            // 0x2ad294: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD380u;
    if (runtime->hasFunction(0x2AD380u)) {
        auto targetFn = runtime->lookupFunction(0x2AD380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD298u; }
        if (ctx->pc != 0x2AD298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD380_0x2ad380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD298u; }
        if (ctx->pc != 0x2AD298u) { return; }
    }
    ctx->pc = 0x2AD298u;
label_2ad298:
    // 0x2ad298: 0xc0ab4dc  jal         func_2AD370
    ctx->pc = 0x2AD298u;
    SET_GPR_U32(ctx, 31, 0x2AD2A0u);
    ctx->pc = 0x2AD29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD298u;
            // 0x2ad29c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD370u;
    if (runtime->hasFunction(0x2AD370u)) {
        auto targetFn = runtime->lookupFunction(0x2AD370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2A0u; }
        if (ctx->pc != 0x2AD2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD370_0x2ad370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD2A0u; }
        if (ctx->pc != 0x2AD2A0u) { return; }
    }
    ctx->pc = 0x2AD2A0u;
label_2ad2a0:
    // 0x2ad2a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ad2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ad2a4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2ad2a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ad2a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD2A8u;
    {
        const bool branch_taken_0x2ad2a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2A8u;
            // 0x2ad2ac: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2a8) {
            ctx->pc = 0x2AD2B8u;
            goto label_2ad2b8;
        }
    }
    ctx->pc = 0x2AD2B0u;
    // 0x2ad2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD2B0u;
    {
        const bool branch_taken_0x2ad2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2B0u;
            // 0x2ad2b4: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2b0) {
            ctx->pc = 0x2AD2BCu;
            goto label_2ad2bc;
        }
    }
    ctx->pc = 0x2AD2B8u;
label_2ad2b8:
    // 0x2ad2b8: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x2ad2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_2ad2bc:
    // 0x2ad2bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ad2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad2c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ad2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad2c4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x2ad2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x2ad2c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ad2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ad2cc: 0xa0440c70  sb          $a0, 0xC70($v0)
    ctx->pc = 0x2ad2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3184), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad2d0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2ad2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ad2d4: 0xac6210e8  sw          $v0, 0x10E8($v1)
    ctx->pc = 0x2ad2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4328), GPR_U32(ctx, 2));
label_2ad2d8:
    // 0x2ad2d8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2ad2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2ad2dc: 0x8c5010e8  lw          $s0, 0x10E8($v0)
    ctx->pc = 0x2ad2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4328)));
    // 0x2ad2e0: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x2ad2e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ad2e4: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD2E4u;
    {
        const bool branch_taken_0x2ad2e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad2e4) {
            ctx->pc = 0x2AD2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2E4u;
            // 0x2ad2e8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD310u;
            goto label_2ad310;
        }
    }
    ctx->pc = 0x2AD2ECu;
    // 0x2ad2ec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ad2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ad2f0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x2ad2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x2ad2f4: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x2ad2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x2ad2f8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2ad2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ad2fc: 0xc049e92  jal         func_127A48
    ctx->pc = 0x2AD2FCu;
    SET_GPR_U32(ctx, 31, 0x2AD304u);
    ctx->pc = 0x2AD300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD2FCu;
            // 0x2ad300: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD304u; }
        if (ctx->pc != 0x2AD304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD304u; }
        if (ctx->pc != 0x2AD304u) { return; }
    }
    ctx->pc = 0x2AD304u;
label_2ad304:
    // 0x2ad304: 0xc04981a  jal         func_126068
    ctx->pc = 0x2AD304u;
    SET_GPR_U32(ctx, 31, 0x2AD30Cu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD30Cu; }
        if (ctx->pc != 0x2AD30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD30Cu; }
        if (ctx->pc != 0x2AD30Cu) { return; }
    }
    ctx->pc = 0x2AD30Cu;
label_2ad30c:
    // 0x2ad30c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ad30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ad310:
    // 0x2ad310: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD310u;
    {
        const bool branch_taken_0x2ad310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad310) {
            ctx->pc = 0x2AD314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD310u;
            // 0x2ad314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD31Cu;
            goto label_2ad31c;
        }
    }
    ctx->pc = 0x2AD318u;
    // 0x2ad318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ad318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ad31c:
    // 0x2ad31c: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2ad31cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ad320: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2AD320u;
    {
        const bool branch_taken_0x2ad320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad320) {
            ctx->pc = 0x2AD358u;
            goto label_2ad358;
        }
    }
    ctx->pc = 0x2AD328u;
    // 0x2ad328: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2ad328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x2ad32c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2ad32cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ad330:
    // 0x2ad330: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD330u;
    {
        const bool branch_taken_0x2ad330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad330) {
            ctx->pc = 0x2AD340u;
            goto label_2ad340;
        }
    }
    ctx->pc = 0x2AD338u;
    // 0x2ad338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD338u;
    {
        const bool branch_taken_0x2ad338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD338u;
            // 0x2ad33c: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad338) {
            ctx->pc = 0x2AD348u;
            goto label_2ad348;
        }
    }
    ctx->pc = 0x2AD340u;
label_2ad340:
    // 0x2ad340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad344: 0x0  nop
    ctx->pc = 0x2ad344u;
    // NOP
label_2ad348:
    // 0x2ad348: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2ad348u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2ad34c: 0x5420fff8  bnel        $at, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AD34Cu;
    {
        const bool branch_taken_0x2ad34c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad34c) {
            ctx->pc = 0x2AD350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD34Cu;
            // 0x2ad350: 0x43082b  sltu        $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AD330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ad330;
        }
    }
    ctx->pc = 0x2AD354u;
    // 0x2ad354: 0x0  nop
    ctx->pc = 0x2ad354u;
    // NOP
label_2ad358:
    // 0x2ad358: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ad358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad35c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ad35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad368: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD368u;
            // 0x2ad36c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD370u;
}
