#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289490
// Address: 0x289490 - 0x2896e0
void sub_00289490_0x289490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289490_0x289490");
#endif

    switch (ctx->pc) {
        case 0x289508u: goto label_289508;
        case 0x289538u: goto label_289538;
        case 0x2895c4u: goto label_2895c4;
        case 0x2895e0u: goto label_2895e0;
        case 0x289624u: goto label_289624;
        case 0x2896a0u: goto label_2896a0;
        default: break;
    }

    ctx->pc = 0x289490u;

    // 0x289490: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x289490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x289494: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x289494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x289498: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x289498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28949c: 0x27a3009c  addiu       $v1, $sp, 0x9C
    ctx->pc = 0x28949cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x2894a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2894a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2894a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2894a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2894a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2894a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2894ac: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2894acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2894b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2894b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2894b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2894b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2894b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2894b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2894bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2894bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2894c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2894c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2894c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2894c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2894c8: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x2894c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2894cc: 0x8cb60004  lw          $s6, 0x4($a1)
    ctx->pc = 0x2894ccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2894d0: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x2894d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2894d4: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x2894d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x2894d8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2894d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2894dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2894dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2894e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2894e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2894e4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2894e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2894e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2894e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2894ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2894ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2894f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2894f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2894f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2894f8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2894f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2894fc: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x2894fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x289500: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x289500u;
    {
        const bool branch_taken_0x289500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289500u;
            // 0x289504: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289500) {
            ctx->pc = 0x289660u;
            goto label_289660;
        }
    }
    ctx->pc = 0x289508u;
label_289508:
    // 0x289508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x289508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28950c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289510: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x289510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x289514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x289514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x289518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x289518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28951c: 0x8c74fffc  lw          $s4, -0x4($v1)
    ctx->pc = 0x28951cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x289520: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x289520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x289524: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x289524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x289528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28952c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x289530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x289534: 0x0  nop
    ctx->pc = 0x289534u;
    // NOP
label_289538:
    // 0x289538: 0x94c50004  lhu         $a1, 0x4($a2)
    ctx->pc = 0x289538u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28953c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x28953cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x289540: 0x2c53021  addu        $a2, $s6, $a1
    ctx->pc = 0x289540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x289544: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x289544u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x289548: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x289548u;
    {
        const bool branch_taken_0x289548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x289548) {
            ctx->pc = 0x289580u;
            goto label_289580;
        }
    }
    ctx->pc = 0x289550u;
    // 0x289550: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x289550u;
    {
        const bool branch_taken_0x289550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x289550) {
            ctx->pc = 0x289580u;
            goto label_289580;
        }
    }
    ctx->pc = 0x289558u;
    // 0x289558: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x289558u;
    {
        const bool branch_taken_0x289558 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289558) {
            ctx->pc = 0x2895D0u;
            goto label_2895d0;
        }
    }
    ctx->pc = 0x289560u;
    // 0x289560: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x289560u;
    {
        const bool branch_taken_0x289560 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x289560) {
            ctx->pc = 0x289570u;
            goto label_289570;
        }
    }
    ctx->pc = 0x289568u;
    // 0x289568: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x289568u;
    {
        const bool branch_taken_0x289568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289568) {
            ctx->pc = 0x2895D0u;
            goto label_2895d0;
        }
    }
    ctx->pc = 0x289570u;
label_289570:
    // 0x289570: 0x16a40017  bne         $s5, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x289570u;
    {
        const bool branch_taken_0x289570 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x289570) {
            ctx->pc = 0x2895D0u;
            goto label_2895d0;
        }
    }
    ctx->pc = 0x289578u;
    // 0x289578: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x289578u;
    {
        const bool branch_taken_0x289578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289578) {
            ctx->pc = 0x2895D8u;
            goto label_2895d8;
        }
    }
    ctx->pc = 0x289580u;
label_289580:
    // 0x289580: 0x10b50013  beq         $a1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x289580u;
    {
        const bool branch_taken_0x289580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        if (branch_taken_0x289580) {
            ctx->pc = 0x2895D0u;
            goto label_2895d0;
        }
    }
    ctx->pc = 0x289588u;
    // 0x289588: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x289588u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28958c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28958cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x289590: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289594: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x289594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289598: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x289598u;
    {
        const bool branch_taken_0x289598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289598) {
            ctx->pc = 0x2895C8u;
            goto label_2895c8;
        }
    }
    ctx->pc = 0x2895A0u;
    // 0x2895a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2895a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2895a4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2895a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2895a8: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2895ac: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2895acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2895b0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2895b4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2895b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2895b8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2895b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2895bc: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2895BCu;
    SET_GPR_U32(ctx, 31, 0x2895C4u);
    ctx->pc = 0x2895C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2895BCu;
            // 0x2895c0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2895C4u; }
        if (ctx->pc != 0x2895C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2895C4u; }
        if (ctx->pc != 0x2895C4u) { return; }
    }
    ctx->pc = 0x2895C4u;
label_2895c4:
    // 0x2895c4: 0x0  nop
    ctx->pc = 0x2895c4u;
    // NOP
label_2895c8:
    // 0x2895c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2895C8u;
    {
        const bool branch_taken_0x2895c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895C8u;
            // 0x2895cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895c8) {
            ctx->pc = 0x2896A8u;
            goto label_2896a8;
        }
    }
    ctx->pc = 0x2895D0u;
label_2895d0:
    // 0x2895d0: 0xa4d50006  sh          $s5, 0x6($a2)
    ctx->pc = 0x2895d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 21));
    // 0x2895d4: 0x0  nop
    ctx->pc = 0x2895d4u;
    // NOP
label_2895d8:
    // 0x2895d8: 0x14d4ffd7  bne         $a2, $s4, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2895D8u;
    {
        const bool branch_taken_0x2895d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 20));
        ctx->pc = 0x2895DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895D8u;
            // 0x2895dc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895d8) {
            ctx->pc = 0x289538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289538;
        }
    }
    ctx->pc = 0x2895E0u;
label_2895e0:
    // 0x2895e0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x2895e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2895e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2895e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2895e8: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x2895e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2895ec: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x2895ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2895f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2895f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2895f4: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x2895f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2895f8: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2895f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2895fc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2895FCu;
    {
        const bool branch_taken_0x2895fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2895fc) {
            ctx->pc = 0x289648u;
            goto label_289648;
        }
    }
    ctx->pc = 0x289604u;
    // 0x289604: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x289604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289608: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x289608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28960c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x28960cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x289610: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x289610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x289614: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x289614u;
    {
        const bool branch_taken_0x289614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x289618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289614u;
            // 0x289618: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289614) {
            ctx->pc = 0x289628u;
            goto label_289628;
        }
    }
    ctx->pc = 0x28961Cu;
    // 0x28961c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x28961Cu;
    SET_GPR_U32(ctx, 31, 0x289624u);
    ctx->pc = 0x289620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28961Cu;
            // 0x289620: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289624u; }
        if (ctx->pc != 0x289624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289624u; }
        if (ctx->pc != 0x289624u) { return; }
    }
    ctx->pc = 0x289624u;
label_289624:
    // 0x289624: 0x0  nop
    ctx->pc = 0x289624u;
    // NOP
label_289628:
    // 0x289628: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x289628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28962c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x289630: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x289630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x289634: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289638: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x289638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28963c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289640: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x289640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x289644: 0x0  nop
    ctx->pc = 0x289644u;
    // NOP
label_289648:
    // 0x289648: 0x1674ffe5  bne         $s3, $s4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x289648u;
    {
        const bool branch_taken_0x289648 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x289648) {
            ctx->pc = 0x2895E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2895e0;
        }
    }
    ctx->pc = 0x289650u;
    // 0x289650: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x289650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289654: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x289654u;
    {
        const bool branch_taken_0x289654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289654) {
            ctx->pc = 0x289508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_289508;
        }
    }
    ctx->pc = 0x28965Cu;
    // 0x28965c: 0x0  nop
    ctx->pc = 0x28965cu;
    // NOP
label_289660:
    // 0x289660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289664: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x289664u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x289668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x289668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28966c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x289670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x289670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289674: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x289674u;
    {
        const bool branch_taken_0x289674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289674) {
            ctx->pc = 0x2896A0u;
            goto label_2896a0;
        }
    }
    ctx->pc = 0x28967Cu;
    // 0x28967c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x28967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x289680: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x289680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x289684: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x289684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x289688: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x289688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x28968c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28968cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289690: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x289690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x289694: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x289694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x289698: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x289698u;
    SET_GPR_U32(ctx, 31, 0x2896A0u);
    ctx->pc = 0x28969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289698u;
            // 0x28969c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2896A0u; }
        if (ctx->pc != 0x2896A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2896A0u; }
        if (ctx->pc != 0x2896A0u) { return; }
    }
    ctx->pc = 0x2896A0u;
label_2896a0:
    // 0x2896a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2896a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2896a4: 0x0  nop
    ctx->pc = 0x2896a4u;
    // NOP
label_2896a8:
    // 0x2896a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2896a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2896ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2896acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2896b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2896b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2896b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2896b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2896b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2896b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2896bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2896bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2896c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2896c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2896c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2896c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2896c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2896c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2896cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2896CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2896D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2896CCu;
            // 0x2896d0: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2896D4u;
    // 0x2896d4: 0x0  nop
    ctx->pc = 0x2896d4u;
    // NOP
    // 0x2896d8: 0x0  nop
    ctx->pc = 0x2896d8u;
    // NOP
    // 0x2896dc: 0x0  nop
    ctx->pc = 0x2896dcu;
    // NOP
}
