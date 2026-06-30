#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004250A0
// Address: 0x4250a0 - 0x425230
void sub_004250A0_0x4250a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004250A0_0x4250a0");
#endif

    switch (ctx->pc) {
        case 0x425134u: goto label_425134;
        case 0x425154u: goto label_425154;
        case 0x425174u: goto label_425174;
        case 0x4251ccu: goto label_4251cc;
        case 0x4251f8u: goto label_4251f8;
        default: break;
    }

    ctx->pc = 0x4250a0u;

    // 0x4250a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4250a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4250a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4250a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4250a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4250a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4250ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4250acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4250b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4250b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4250b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4250b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4250b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4250b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4250bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4250bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4250c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4250c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4250c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4250c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4250c8: 0x90830060  lbu         $v1, 0x60($a0)
    ctx->pc = 0x4250c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x4250cc: 0x5460004b  bnel        $v1, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x4250CCu;
    {
        const bool branch_taken_0x4250cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4250cc) {
            ctx->pc = 0x4250D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4250CCu;
            // 0x4250d0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4251FCu;
            goto label_4251fc;
        }
    }
    ctx->pc = 0x4250D4u;
    // 0x4250d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4250d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4250d8: 0x8c950050  lw          $s5, 0x50($a0)
    ctx->pc = 0x4250d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x4250dc: 0x8c467380  lw          $a2, 0x7380($v0)
    ctx->pc = 0x4250dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29568)));
    // 0x4250e0: 0x8c940058  lw          $s4, 0x58($a0)
    ctx->pc = 0x4250e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x4250e4: 0x8c90005c  lw          $s0, 0x5C($a0)
    ctx->pc = 0x4250e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x4250e8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4250e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4250ec: 0x24d10084  addiu       $s1, $a2, 0x84
    ctx->pc = 0x4250ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 132));
    // 0x4250f0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x4250f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x4250f4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4250f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4250f8: 0x8cb30130  lw          $s3, 0x130($a1)
    ctx->pc = 0x4250f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x4250fc: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4250fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x425100: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x425100u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x425104: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x425108: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x425108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x42510c: 0x8c56e378  lw          $s6, -0x1C88($v0)
    ctx->pc = 0x42510cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
    // 0x425110: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x425110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x425114: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x425114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x425118: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x425118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x42511c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x42511cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x425120: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x425120u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
    // 0x425124: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x425124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
    // 0x425128: 0x24920010  addiu       $s2, $a0, 0x10
    ctx->pc = 0x425128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x42512c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x425130: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x425130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_425134:
    // 0x425134: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x425134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425138: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x425138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42513c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x42513cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425140: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x425140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425144: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x425144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425148: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x425148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x42514c: 0xc109960  jal         func_426580
    ctx->pc = 0x42514Cu;
    SET_GPR_U32(ctx, 31, 0x425154u);
    ctx->pc = 0x425150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42514Cu;
            // 0x425150: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x426580u;
    if (runtime->hasFunction(0x426580u)) {
        auto targetFn = runtime->lookupFunction(0x426580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425154u; }
        if (ctx->pc != 0x425154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00426580_0x426580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425154u; }
        if (ctx->pc != 0x425154u) { return; }
    }
    ctx->pc = 0x425154u;
label_425154:
    // 0x425154: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x425154u;
    {
        const bool branch_taken_0x425154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x425154) {
            ctx->pc = 0x4251A8u;
            goto label_4251a8;
        }
    }
    ctx->pc = 0x42515Cu;
    // 0x42515c: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x42515cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x425160: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x425160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x425164: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x425164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x425168: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x425168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x42516c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x42516Cu;
    SET_GPR_U32(ctx, 31, 0x425174u);
    ctx->pc = 0x425170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42516Cu;
            // 0x425170: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425174u; }
        if (ctx->pc != 0x425174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x425174u; }
        if (ctx->pc != 0x425174u) { return; }
    }
    ctx->pc = 0x425174u;
label_425174:
    // 0x425174: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x425174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x425178: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x425178u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x42517c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x42517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x425180: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x425180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x425184: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x425184u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x425188: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x425188u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x42518c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x42518cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x425190: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x425190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x425194: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x425194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x425198: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x425198u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x42519c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x42519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4251a0: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x4251a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x4251a4: 0x0  nop
    ctx->pc = 0x4251a4u;
    // NOP
label_4251a8:
    // 0x4251a8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4251a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4251ac: 0x1e80ffe1  bgtz        $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4251ACu;
    {
        const bool branch_taken_0x4251ac = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x4251B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4251ACu;
            // 0x4251b0: 0x26b500f0  addiu       $s5, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4251ac) {
            ctx->pc = 0x425134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_425134;
        }
    }
    ctx->pc = 0x4251B4u;
    // 0x4251b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4251b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4251b8: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4251b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x4251bc: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4251BCu;
    {
        const bool branch_taken_0x4251bc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4251bc) {
            ctx->pc = 0x4251F8u;
            goto label_4251f8;
        }
    }
    ctx->pc = 0x4251C4u;
    // 0x4251c4: 0xc04e738  jal         func_139CE0
    ctx->pc = 0x4251C4u;
    SET_GPR_U32(ctx, 31, 0x4251CCu);
    ctx->pc = 0x4251C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4251C4u;
            // 0x4251c8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4251CCu; }
        if (ctx->pc != 0x4251CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4251CCu; }
        if (ctx->pc != 0x4251CCu) { return; }
    }
    ctx->pc = 0x4251CCu;
label_4251cc:
    // 0x4251cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4251ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4251d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4251d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4251d4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4251d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
    // 0x4251d8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4251d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x4251dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4251dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4251e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4251e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4251e4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4251e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
    // 0x4251e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4251e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4251ec: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4251ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
    // 0x4251f0: 0xc055d28  jal         func_1574A0
    ctx->pc = 0x4251F0u;
    SET_GPR_U32(ctx, 31, 0x4251F8u);
    ctx->pc = 0x4251F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4251F0u;
            // 0x4251f4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4251F8u; }
        if (ctx->pc != 0x4251F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4251F8u; }
        if (ctx->pc != 0x4251F8u) { return; }
    }
    ctx->pc = 0x4251F8u;
label_4251f8:
    // 0x4251f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4251f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4251fc:
    // 0x4251fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4251fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x425200: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x425200u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x425204: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x425204u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x425208: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x425208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42520c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42520cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x425210: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x425210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x425214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x425214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x425218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x425218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42521c: 0x3e00008  jr          $ra
    ctx->pc = 0x42521Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42521Cu;
            // 0x425220: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x425224u;
    // 0x425224: 0x0  nop
    ctx->pc = 0x425224u;
    // NOP
    // 0x425228: 0x0  nop
    ctx->pc = 0x425228u;
    // NOP
    // 0x42522c: 0x0  nop
    ctx->pc = 0x42522cu;
    // NOP
}
