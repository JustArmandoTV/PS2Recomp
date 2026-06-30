#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002883F0
// Address: 0x2883f0 - 0x2885a0
void sub_002883F0_0x2883f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002883F0_0x2883f0");
#endif

    switch (ctx->pc) {
        case 0x288478u: goto label_288478;
        case 0x2884bcu: goto label_2884bc;
        case 0x2884f4u: goto label_2884f4;
        case 0x288548u: goto label_288548;
        case 0x288568u: goto label_288568;
        default: break;
    }

    ctx->pc = 0x2883f0u;

    // 0x2883f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2883f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2883f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2883f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2883f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2883f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2883fc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2883fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x288400: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x288400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x288404: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x288404u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288408: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x288408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x28840c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x28840cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288410: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x288410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x288414: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x288414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288418: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x288418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28841c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28841cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288420: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x288420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x288424: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x288424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x288428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28842c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28842cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288430: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x288430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x288434: 0xafa800e8  sw          $t0, 0xE8($sp)
    ctx->pc = 0x288434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 8));
    // 0x288438: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x288438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x28843c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x28843cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x288440: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x288440u;
    {
        const bool branch_taken_0x288440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x288444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288440u;
            // 0x288444: 0x160a02d  daddu       $s4, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288440) {
            ctx->pc = 0x288568u;
            goto label_288568;
        }
    }
    ctx->pc = 0x288448u;
    // 0x288448: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x288448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x28844c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x28844cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x288450: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x288450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x288454: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x288454u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x288458: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28845c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x28845cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x288460: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x288460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x288464: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x288464u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x288468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x288468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28846c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x28846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x288470: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x288470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x288474: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x288474u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_288478:
    // 0x288478: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x288478u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28847c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x28847cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x288480: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x288480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x288484: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x288484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288488: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x288488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28848c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288490: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x288490u;
    {
        const bool branch_taken_0x288490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288490u;
            // 0x288494: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288490) {
            ctx->pc = 0x2884ACu;
            goto label_2884ac;
        }
    }
    ctx->pc = 0x288498u;
    // 0x288498: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x288498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x28849c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28849cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2884a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2884A0u;
    {
        const bool branch_taken_0x2884a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2884A0u;
            // 0x2884a4: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884a0) {
            ctx->pc = 0x2884C0u;
            goto label_2884c0;
        }
    }
    ctx->pc = 0x2884A8u;
    // 0x2884a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2884a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2884ac:
    // 0x2884ac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2884acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884b0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2884b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884b4: 0xc0a2718  jal         func_289C60
    ctx->pc = 0x2884B4u;
    SET_GPR_U32(ctx, 31, 0x2884BCu);
    ctx->pc = 0x2884B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2884B4u;
            // 0x2884b8: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289C60u;
    if (runtime->hasFunction(0x289C60u)) {
        auto targetFn = runtime->lookupFunction(0x289C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884BCu; }
        if (ctx->pc != 0x2884BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289C60_0x289c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884BCu; }
        if (ctx->pc != 0x2884BCu) { return; }
    }
    ctx->pc = 0x2884BCu;
label_2884bc:
    // 0x2884bc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2884bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2884c0:
    // 0x2884c0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2884c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2884c4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2884c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2884c8: 0x26300001  addiu       $s0, $s1, 0x1
    ctx->pc = 0x2884c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2884cc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2884ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2884d0: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2884d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2884d4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2884D4u;
    {
        const bool branch_taken_0x2884d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2884D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2884D4u;
            // 0x2884d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2884d4) {
            ctx->pc = 0x2884F8u;
            goto label_2884f8;
        }
    }
    ctx->pc = 0x2884DCu;
    // 0x2884dc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2884dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2884e0: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x2884e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2884e4: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x2884e4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x2884e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2884e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2884ec: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x2884ECu;
    SET_GPR_U32(ctx, 31, 0x2884F4u);
    ctx->pc = 0x2884F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2884ECu;
            // 0x2884f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884F4u; }
        if (ctx->pc != 0x2884F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2884F4u; }
        if (ctx->pc != 0x2884F4u) { return; }
    }
    ctx->pc = 0x2884F4u;
label_2884f4:
    // 0x2884f4: 0x0  nop
    ctx->pc = 0x2884f4u;
    // NOP
label_2884f8:
    // 0x2884f8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x2884f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x2884fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2884fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288500: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x288500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x288504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x288504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x288508: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x288508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x28850c: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x28850cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x288510: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x288510u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x288514: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x288514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x288518: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x288518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x28851c: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x28851cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x288520: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x288520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x288524: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x288524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x288528: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x288528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28852c: 0x1642ffd2  bne         $s2, $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x28852Cu;
    {
        const bool branch_taken_0x28852c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x28852c) {
            ctx->pc = 0x288478u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288478;
        }
    }
    ctx->pc = 0x288534u;
    // 0x288534: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x288534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288538: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x288538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x28853c: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x28853cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x288540: 0xc0a29a8  jal         func_28A6A0
    ctx->pc = 0x288540u;
    SET_GPR_U32(ctx, 31, 0x288548u);
    ctx->pc = 0x288544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288540u;
            // 0x288544: 0x24c6a660  addiu       $a2, $a2, -0x59A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A6A0u;
    if (runtime->hasFunction(0x28A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x28A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288548u; }
        if (ctx->pc != 0x288548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A6A0_0x28a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288548u; }
        if (ctx->pc != 0x288548u) { return; }
    }
    ctx->pc = 0x288548u;
label_288548:
    // 0x288548: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x288548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28854c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288550: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x288550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x288554: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x288554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288558: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x288558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28855c: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x28855cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288560: 0xc0a2168  jal         func_2885A0
    ctx->pc = 0x288560u;
    SET_GPR_U32(ctx, 31, 0x288568u);
    ctx->pc = 0x288564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288560u;
            // 0x288564: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2885A0u;
    if (runtime->hasFunction(0x2885A0u)) {
        auto targetFn = runtime->lookupFunction(0x2885A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288568u; }
        if (ctx->pc != 0x288568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002885A0_0x2885a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288568u; }
        if (ctx->pc != 0x288568u) { return; }
    }
    ctx->pc = 0x288568u;
label_288568:
    // 0x288568: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x288568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28856c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x28856cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288570: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x288570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288574: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x288574u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288578: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x288578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28857c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28857cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288580: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x288580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288584: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x288584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288588: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x288588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28858c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28858cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288590: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288594: 0x3e00008  jr          $ra
    ctx->pc = 0x288594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288594u;
            // 0x288598: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28859Cu;
    // 0x28859c: 0x0  nop
    ctx->pc = 0x28859cu;
    // NOP
}
