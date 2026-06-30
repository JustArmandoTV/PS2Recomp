#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6308
// Address: 0x1c6308 - 0x1c63c8
void sub_001C6308_0x1c6308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6308_0x1c6308");
#endif

    switch (ctx->pc) {
        case 0x1c6330u: goto label_1c6330;
        case 0x1c6384u: goto label_1c6384;
        case 0x1c63a4u: goto label_1c63a4;
        default: break;
    }

    ctx->pc = 0x1c6308u;

    // 0x1c6308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c630c: 0x24060770  addiu       $a2, $zero, 0x770
    ctx->pc = 0x1c630cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
    // 0x1c6310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c631c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c631cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6328: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C6328u;
    SET_GPR_U32(ctx, 31, 0x1C6330u);
    ctx->pc = 0x1C632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6328u;
            // 0x1c632c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6330u; }
        if (ctx->pc != 0x1C6330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6330u; }
        if (ctx->pc != 0x1C6330u) { return; }
    }
    ctx->pc = 0x1C6330u;
label_1c6330:
    // 0x1c6330: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c6330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6334: 0x3c074349  lui         $a3, 0x4349
    ctx->pc = 0x1c6334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17225 << 16));
    // 0x1c6338: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x1c6338u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c633c: 0x3c084356  lui         $t0, 0x4356
    ctx->pc = 0x1c633cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17238 << 16));
    // 0x1c6340: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x1c6340u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x1c6344: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1c6344u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1c6348: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c6348u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c634c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c634cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c6350: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1c6350u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1c6354: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x1c6354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x1c6358: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1c6358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1c635c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1c635cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1c6360: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c6360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c6364: 0x34e74d46  ori         $a3, $a3, 0x4D46
    ctx->pc = 0x1c6364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)19782);
    // 0x1c6368: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1c6368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c636c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6374: 0x14c70006  bne         $a2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6374u;
    {
        const bool branch_taken_0x1c6374 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x1C6378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6374u;
            // 0x1c6378: 0x35084d48  ori         $t0, $t0, 0x4D48 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)19784);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6374) {
            ctx->pc = 0x1C6390u;
            goto label_1c6390;
        }
    }
    ctx->pc = 0x1C637Cu;
    // 0x1c637c: 0xc0719d6  jal         func_1C6758
    ctx->pc = 0x1C637Cu;
    SET_GPR_U32(ctx, 31, 0x1C6384u);
    ctx->pc = 0x1C6758u;
    if (runtime->hasFunction(0x1C6758u)) {
        auto targetFn = runtime->lookupFunction(0x1C6758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6384u; }
        if (ctx->pc != 0x1C6384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6758_0x1c6758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6384u; }
        if (ctx->pc != 0x1C6384u) { return; }
    }
    ctx->pc = 0x1C6384u;
label_1c6384:
    // 0x1c6384: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C6384u;
    {
        const bool branch_taken_0x1c6384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6384u;
            // 0x1c6388: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6384) {
            ctx->pc = 0x1C63B4u;
            goto label_1c63b4;
        }
    }
    ctx->pc = 0x1C638Cu;
    // 0x1c638c: 0x0  nop
    ctx->pc = 0x1c638cu;
    // NOP
label_1c6390:
    // 0x1c6390: 0x54c80007  bnel        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6390u;
    {
        const bool branch_taken_0x1c6390 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x1c6390) {
            ctx->pc = 0x1C6394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6390u;
            // 0x1c6394: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C63B0u;
            goto label_1c63b0;
        }
    }
    ctx->pc = 0x1C6398u;
    // 0x1c6398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c639c: 0xc07183c  jal         func_1C60F0
    ctx->pc = 0x1C639Cu;
    SET_GPR_U32(ctx, 31, 0x1C63A4u);
    ctx->pc = 0x1C63A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C639Cu;
            // 0x1c63a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C60F0u;
    if (runtime->hasFunction(0x1C60F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C60F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63A4u; }
        if (ctx->pc != 0x1C63A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C60F0_0x1c60f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63A4u; }
        if (ctx->pc != 0x1C63A4u) { return; }
    }
    ctx->pc = 0x1C63A4u;
label_1c63a4:
    // 0x1c63a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C63A4u;
    {
        const bool branch_taken_0x1c63a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63A4u;
            // 0x1c63a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63a4) {
            ctx->pc = 0x1C63B4u;
            goto label_1c63b4;
        }
    }
    ctx->pc = 0x1C63ACu;
    // 0x1c63ac: 0x0  nop
    ctx->pc = 0x1c63acu;
    // NOP
label_1c63b0:
    // 0x1c63b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c63b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c63b4:
    // 0x1c63b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c63b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c63b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c63b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c63bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C63BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C63C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63BCu;
            // 0x1c63c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C63C4u;
    // 0x1c63c4: 0x0  nop
    ctx->pc = 0x1c63c4u;
    // NOP
}
