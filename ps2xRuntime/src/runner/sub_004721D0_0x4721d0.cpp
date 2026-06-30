#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004721D0
// Address: 0x4721d0 - 0x472680
void sub_004721D0_0x4721d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004721D0_0x4721d0");
#endif

    switch (ctx->pc) {
        case 0x4722c8u: goto label_4722c8;
        case 0x472314u: goto label_472314;
        case 0x47232cu: goto label_47232c;
        case 0x47235cu: goto label_47235c;
        case 0x47238cu: goto label_47238c;
        case 0x4723bcu: goto label_4723bc;
        case 0x4723ecu: goto label_4723ec;
        case 0x47241cu: goto label_47241c;
        case 0x4724c0u: goto label_4724c0;
        case 0x4724d8u: goto label_4724d8;
        case 0x472564u: goto label_472564;
        case 0x472578u: goto label_472578;
        case 0x472598u: goto label_472598;
        case 0x4725c0u: goto label_4725c0;
        default: break;
    }

    ctx->pc = 0x4721d0u;

    // 0x4721d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x4721d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x4721d4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4721d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4721d8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4721d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4721dc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4721dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x4721e0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4721e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x4721e4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4721e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4721e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4721e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x4721ec: 0x24b60008  addiu       $s6, $a1, 0x8
    ctx->pc = 0x4721ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4721f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4721f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4721f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4721f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4721f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4721f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4721fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4721fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x472200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x472200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x472204: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x472204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x472208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x472208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47220c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x47220cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x472210: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x472210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x472214: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x472214u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x472218: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x472218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x47221c: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x47221cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x472220: 0xa7a80100  sh          $t0, 0x100($sp)
    ctx->pc = 0x472220u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 8));
    // 0x472224: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x472224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x472228: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x472228u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x47222c: 0xa7a70102  sh          $a3, 0x102($sp)
    ctx->pc = 0x47222cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 7));
    // 0x472230: 0x84a40004  lh          $a0, 0x4($a1)
    ctx->pc = 0x472230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x472234: 0x63c02  srl         $a3, $a2, 16
    ctx->pc = 0x472234u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x472238: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x472238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x47223c: 0xa7a40104  sh          $a0, 0x104($sp)
    ctx->pc = 0x47223cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 4));
    // 0x472240: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x472240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x472244: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x472244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x472248: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x472248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x47224c: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x47224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x472250: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x472250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x472254: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x472254u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x472258: 0x24900070  addiu       $s0, $a0, 0x70
    ctx->pc = 0x472258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x47225c: 0xa7a30106  sh          $v1, 0x106($sp)
    ctx->pc = 0x47225cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 262), (uint16_t)GPR_U32(ctx, 3));
    // 0x472260: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x472260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x472264: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x472264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x472268: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x472268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x47226c: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x47226cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
    // 0x472270: 0x97a30104  lhu         $v1, 0x104($sp)
    ctx->pc = 0x472270u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x472274: 0x24c6ef10  addiu       $a2, $a2, -0x10F0
    ctx->pc = 0x472274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962960));
    // 0x472278: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x472278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x47227c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x47227cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x472280: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x472280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x472284: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x472284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x472288: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x472288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x47228c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x47228cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x472290: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x472290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x472294: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x472294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x472298: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x472298u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x47229c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x47229cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4722a0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4722a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4722a4: 0x24640003  addiu       $a0, $v1, 0x3
    ctx->pc = 0x4722a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4722a8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x4722a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4722ac: 0x889024  and         $s2, $a0, $t0
    ctx->pc = 0x4722acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4722b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4722b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4722b4: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x4722b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4722b8: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x4722b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4722bc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4722bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4722c0: 0x2439821  addu        $s3, $s2, $v1
    ctx->pc = 0x4722c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x4722c4: 0x263b821  addu        $s7, $s3, $v1
    ctx->pc = 0x4722c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_4722c8:
    // 0x4722c8: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x4722c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4722cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4722ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4722d0: 0x10c3006b  beq         $a2, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x4722D0u;
    {
        const bool branch_taken_0x4722d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4722d0) {
            ctx->pc = 0x472480u;
            goto label_472480;
        }
    }
    ctx->pc = 0x4722D8u;
    // 0x4722d8: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x4722d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x4722dc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4722dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4722e0: 0x905e0000  lbu         $fp, 0x0($v0)
    ctx->pc = 0x4722e0u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4722e4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4722e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4722e8: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x4722e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x4722ec: 0x24a5f0a8  addiu       $a1, $a1, -0xF58
    ctx->pc = 0x4722ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963368));
    // 0x4722f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4722f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4722f4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4722f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4722f8: 0x2e3a821  addu        $s5, $s7, $v1
    ctx->pc = 0x4722f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x4722fc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4722fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x472300: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x472300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x472304: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x472304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x472308: 0xafa600d0  sw          $a2, 0xD0($sp)
    ctx->pc = 0x472308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
    // 0x47230c: 0xc0b39c8  jal         func_2CE720
    ctx->pc = 0x47230Cu;
    SET_GPR_U32(ctx, 31, 0x472314u);
    ctx->pc = 0x472310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47230Cu;
            // 0x472310: 0xafb500f0  sw          $s5, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE720u;
    if (runtime->hasFunction(0x2CE720u)) {
        auto targetFn = runtime->lookupFunction(0x2CE720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472314u; }
        if (ctx->pc != 0x472314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE720_0x2ce720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472314u; }
        if (ctx->pc != 0x472314u) { return; }
    }
    ctx->pc = 0x472314u;
label_472314:
    // 0x472314: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x472314u;
    {
        const bool branch_taken_0x472314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x472314) {
            ctx->pc = 0x472440u;
            goto label_472440;
        }
    }
    ctx->pc = 0x47231Cu;
    // 0x47231c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47231cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x472320: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x472320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x472324: 0xc0b39c0  jal         func_2CE700
    ctx->pc = 0x472324u;
    SET_GPR_U32(ctx, 31, 0x47232Cu);
    ctx->pc = 0x472328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472324u;
            // 0x472328: 0x24a5f0b0  addiu       $a1, $a1, -0xF50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE700u;
    if (runtime->hasFunction(0x2CE700u)) {
        auto targetFn = runtime->lookupFunction(0x2CE700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47232Cu; }
        if (ctx->pc != 0x47232Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE700_0x2ce700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47232Cu; }
        if (ctx->pc != 0x47232Cu) { return; }
    }
    ctx->pc = 0x47232Cu;
label_47232c:
    // 0x47232c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x47232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x472330: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x472330u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x472334: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x472334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x472338: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x472338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x47233c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47233cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x472340: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x472340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x472344: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x472344u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x472348: 0x24a5f0b8  addiu       $a1, $a1, -0xF48
    ctx->pc = 0x472348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963384));
    // 0x47234c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x47234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x472350: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x472350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x472354: 0xc0b39c0  jal         func_2CE700
    ctx->pc = 0x472354u;
    SET_GPR_U32(ctx, 31, 0x47235Cu);
    ctx->pc = 0x472358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472354u;
            // 0x472358: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE700u;
    if (runtime->hasFunction(0x2CE700u)) {
        auto targetFn = runtime->lookupFunction(0x2CE700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47235Cu; }
        if (ctx->pc != 0x47235Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE700_0x2ce700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47235Cu; }
        if (ctx->pc != 0x47235Cu) { return; }
    }
    ctx->pc = 0x47235Cu;
label_47235c:
    // 0x47235c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x47235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x472360: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x472360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x472364: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x472364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x472368: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x472368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x47236c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47236cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x472370: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x472370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x472374: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x472374u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x472378: 0x24a5f0c0  addiu       $a1, $a1, -0xF40
    ctx->pc = 0x472378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963392));
    // 0x47237c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x47237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x472380: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x472380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x472384: 0xc0b39c0  jal         func_2CE700
    ctx->pc = 0x472384u;
    SET_GPR_U32(ctx, 31, 0x47238Cu);
    ctx->pc = 0x472388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472384u;
            // 0x472388: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE700u;
    if (runtime->hasFunction(0x2CE700u)) {
        auto targetFn = runtime->lookupFunction(0x2CE700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47238Cu; }
        if (ctx->pc != 0x47238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE700_0x2ce700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47238Cu; }
        if (ctx->pc != 0x47238Cu) { return; }
    }
    ctx->pc = 0x47238Cu;
label_47238c:
    // 0x47238c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x47238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x472390: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x472390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x472394: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x472394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x472398: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x472398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x47239c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47239cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4723a0: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x4723a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x4723a4: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4723a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4723a8: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x4723a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
    // 0x4723ac: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x4723acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4723b0: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x4723b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4723b4: 0xc0b39c0  jal         func_2CE700
    ctx->pc = 0x4723B4u;
    SET_GPR_U32(ctx, 31, 0x4723BCu);
    ctx->pc = 0x4723B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4723B4u;
            // 0x4723b8: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE700u;
    if (runtime->hasFunction(0x2CE700u)) {
        auto targetFn = runtime->lookupFunction(0x2CE700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4723BCu; }
        if (ctx->pc != 0x4723BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE700_0x2ce700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4723BCu; }
        if (ctx->pc != 0x4723BCu) { return; }
    }
    ctx->pc = 0x4723BCu;
label_4723bc:
    // 0x4723bc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4723bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4723c0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4723c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4723c4: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x4723c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x4723c8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x4723c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4723cc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4723ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4723d0: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x4723d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x4723d4: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4723d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4723d8: 0x24a5f0d0  addiu       $a1, $a1, -0xF30
    ctx->pc = 0x4723d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963408));
    // 0x4723dc: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x4723dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4723e0: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x4723e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4723e4: 0xc0b39c0  jal         func_2CE700
    ctx->pc = 0x4723E4u;
    SET_GPR_U32(ctx, 31, 0x4723ECu);
    ctx->pc = 0x4723E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4723E4u;
            // 0x4723e8: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE700u;
    if (runtime->hasFunction(0x2CE700u)) {
        auto targetFn = runtime->lookupFunction(0x2CE700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4723ECu; }
        if (ctx->pc != 0x4723ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE700_0x2ce700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4723ECu; }
        if (ctx->pc != 0x4723ECu) { return; }
    }
    ctx->pc = 0x4723ECu;
label_4723ec:
    // 0x4723ec: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4723ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4723f0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4723f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4723f4: 0x8fa600ec  lw          $a2, 0xEC($sp)
    ctx->pc = 0x4723f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x4723f8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x4723f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4723fc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4723fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x472400: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x472400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x472404: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x472404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x472408: 0x24a5f0d8  addiu       $a1, $a1, -0xF28
    ctx->pc = 0x472408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963416));
    // 0x47240c: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x47240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x472410: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x472410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x472414: 0xc0b39c0  jal         func_2CE700
    ctx->pc = 0x472414u;
    SET_GPR_U32(ctx, 31, 0x47241Cu);
    ctx->pc = 0x472418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472414u;
            // 0x472418: 0xafa200e4  sw          $v0, 0xE4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE700u;
    if (runtime->hasFunction(0x2CE700u)) {
        auto targetFn = runtime->lookupFunction(0x2CE700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47241Cu; }
        if (ctx->pc != 0x47241Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE700_0x2ce700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47241Cu; }
        if (ctx->pc != 0x47241Cu) { return; }
    }
    ctx->pc = 0x47241Cu;
label_47241c:
    // 0x47241c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x47241cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x472420: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x472420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x472424: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x472424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x472428: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x472428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x47242c: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x47242cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x472430: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x472430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x472434: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x472434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x472438: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x472438u;
    {
        const bool branch_taken_0x472438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47243Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472438u;
            // 0x47243c: 0xafa300e8  sw          $v1, 0xE8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472438) {
            ctx->pc = 0x472448u;
            goto label_472448;
        }
    }
    ctx->pc = 0x472440u;
label_472440:
    // 0x472440: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x472440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x472444: 0x0  nop
    ctx->pc = 0x472444u;
    // NOP
label_472448:
    // 0x472448: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x472448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x47244c: 0x2a31823  subu        $v1, $s5, $v1
    ctx->pc = 0x47244cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x472450: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x472450u;
    {
        const bool branch_taken_0x472450 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x472454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472450u;
            // 0x472454: 0x32083  sra         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472450) {
            ctx->pc = 0x472460u;
            goto label_472460;
        }
    }
    ctx->pc = 0x472458u;
    // 0x472458: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x472458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x47245c: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x47245cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
label_472460:
    // 0x472460: 0x3c41823  subu        $v1, $fp, $a0
    ctx->pc = 0x472460u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x472464: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x472464u;
    {
        const bool branch_taken_0x472464 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x472468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472464u;
            // 0x472468: 0xafa300f4  sw          $v1, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472464) {
            ctx->pc = 0x472480u;
            goto label_472480;
        }
    }
    ctx->pc = 0x47246Cu;
    // 0x47246c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x47246cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x472470: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x472470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x472474: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x472474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x472478: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x472478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x47247c: 0x0  nop
    ctx->pc = 0x47247cu;
    // NOP
label_472480:
    // 0x472480: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x472480u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x472484: 0x3403ea6a  ori         $v1, $zero, 0xEA6A
    ctx->pc = 0x472484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60010);
    // 0x472488: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x472488u;
    {
        const bool branch_taken_0x472488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x472488) {
            ctx->pc = 0x472570u;
            goto label_472570;
        }
    }
    ctx->pc = 0x472490u;
    // 0x472490: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x472490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x472494: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x472494u;
    {
        const bool branch_taken_0x472494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x472494) {
            ctx->pc = 0x472538u;
            goto label_472538;
        }
    }
    ctx->pc = 0x47249Cu;
    // 0x47249c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47249Cu;
    {
        const bool branch_taken_0x47249c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47249c) {
            ctx->pc = 0x4724B0u;
            goto label_4724b0;
        }
    }
    ctx->pc = 0x4724A4u;
    // 0x4724a4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x4724A4u;
    {
        const bool branch_taken_0x4724a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4724a4) {
            ctx->pc = 0x472638u;
            goto label_472638;
        }
    }
    ctx->pc = 0x4724ACu;
    // 0x4724ac: 0x0  nop
    ctx->pc = 0x4724acu;
    // NOP
label_4724b0:
    // 0x4724b0: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x4724b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x4724b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4724b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4724b8: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x4724B8u;
    SET_GPR_U32(ctx, 31, 0x4724C0u);
    ctx->pc = 0x4724BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4724B8u;
            // 0x4724bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4724C0u; }
        if (ctx->pc != 0x4724C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4724C0u; }
        if (ctx->pc != 0x4724C0u) { return; }
    }
    ctx->pc = 0x4724C0u;
label_4724c0:
    // 0x4724c0: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x4724c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x4724c4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4724C4u;
    {
        const bool branch_taken_0x4724c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4724c4) {
            ctx->pc = 0x4724D8u;
            goto label_4724d8;
        }
    }
    ctx->pc = 0x4724CCu;
    // 0x4724cc: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4724ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4724d0: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x4724D0u;
    SET_GPR_U32(ctx, 31, 0x4724D8u);
    ctx->pc = 0x4724D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4724D0u;
            // 0x4724d4: 0x26050024  addiu       $a1, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4724D8u; }
        if (ctx->pc != 0x4724D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4724D8u; }
        if (ctx->pc != 0x4724D8u) { return; }
    }
    ctx->pc = 0x4724D8u;
label_4724d8:
    // 0x4724d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4724d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4724dc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4724dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4724e0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x4724e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4724e4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x4724e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4724e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x4724E8u;
    {
        const bool branch_taken_0x4724e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4724e8) {
            ctx->pc = 0x4724F8u;
            goto label_4724f8;
        }
    }
    ctx->pc = 0x4724F0u;
    // 0x4724f0: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x4724f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x4724f4: 0x0  nop
    ctx->pc = 0x4724f4u;
    // NOP
label_4724f8:
    // 0x4724f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4724f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4724fc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4724fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x472500: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x472500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x472504: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x472504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x472508: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x472508u;
    {
        const bool branch_taken_0x472508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x472508) {
            ctx->pc = 0x472518u;
            goto label_472518;
        }
    }
    ctx->pc = 0x472510u;
    // 0x472510: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x472510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x472514: 0x0  nop
    ctx->pc = 0x472514u;
    // NOP
label_472518:
    // 0x472518: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x472518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x47251c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x47251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x472520: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x472520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x472524: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x472524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x472528: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x472528u;
    {
        const bool branch_taken_0x472528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x472528) {
            ctx->pc = 0x472638u;
            goto label_472638;
        }
    }
    ctx->pc = 0x472530u;
    // 0x472530: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x472530u;
    {
        const bool branch_taken_0x472530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472530u;
            // 0x472534: 0xae040058  sw          $a0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472530) {
            ctx->pc = 0x472638u;
            goto label_472638;
        }
    }
    ctx->pc = 0x472538u;
label_472538:
    // 0x472538: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x472538u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x47253c: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x47253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x472540: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x472540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x472544: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x472544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x472548: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x472548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x47254c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47254cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x472550: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x472550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x472554: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x472554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x472558: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x472558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47255c: 0xc11c820  jal         func_472080
    ctx->pc = 0x47255Cu;
    SET_GPR_U32(ctx, 31, 0x472564u);
    ctx->pc = 0x472560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47255Cu;
            // 0x472560: 0xafa200f4  sw          $v0, 0xF4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x472080u;
    if (runtime->hasFunction(0x472080u)) {
        auto targetFn = runtime->lookupFunction(0x472080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472564u; }
        if (ctx->pc != 0x472564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00472080_0x472080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472564u; }
        if (ctx->pc != 0x472564u) { return; }
    }
    ctx->pc = 0x472564u;
label_472564:
    // 0x472564: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x472564u;
    {
        const bool branch_taken_0x472564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472564) {
            ctx->pc = 0x472638u;
            goto label_472638;
        }
    }
    ctx->pc = 0x47256Cu;
    // 0x47256c: 0x0  nop
    ctx->pc = 0x47256cu;
    // NOP
label_472570:
    // 0x472570: 0xc040180  jal         func_100600
    ctx->pc = 0x472570u;
    SET_GPR_U32(ctx, 31, 0x472578u);
    ctx->pc = 0x472574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472570u;
            // 0x472574: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472578u; }
        if (ctx->pc != 0x472578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472578u; }
        if (ctx->pc != 0x472578u) { return; }
    }
    ctx->pc = 0x472578u;
label_472578:
    // 0x472578: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x472578u;
    {
        const bool branch_taken_0x472578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47257Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472578u;
            // 0x47257c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472578) {
            ctx->pc = 0x472638u;
            goto label_472638;
        }
    }
    ctx->pc = 0x472580u;
    // 0x472580: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x472580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x472584: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x472584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472588: 0x34458703  ori         $a1, $v0, 0x8703
    ctx->pc = 0x472588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34563);
    // 0x47258c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47258cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x472590: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x472590u;
    SET_GPR_U32(ctx, 31, 0x472598u);
    ctx->pc = 0x472594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472590u;
            // 0x472594: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472598u; }
        if (ctx->pc != 0x472598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472598u; }
        if (ctx->pc != 0x472598u) { return; }
    }
    ctx->pc = 0x472598u;
label_472598:
    // 0x472598: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x472598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x47259c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4725a0: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4725a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4725a4: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x4725a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x4725a8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4725a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4725ac: 0x26a40054  addiu       $a0, $s5, 0x54
    ctx->pc = 0x4725acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
    // 0x4725b0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4725b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4725b4: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x4725b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x4725b8: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x4725B8u;
    SET_GPR_U32(ctx, 31, 0x4725C0u);
    ctx->pc = 0x4725BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4725B8u;
            // 0x4725bc: 0xaea00054  sw          $zero, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4725C0u; }
        if (ctx->pc != 0x4725C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4725C0u; }
        if (ctx->pc != 0x4725C0u) { return; }
    }
    ctx->pc = 0x4725C0u;
label_4725c0:
    // 0x4725c0: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x4725c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x4725c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4725c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4725c8: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x4725c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x4725cc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x4725ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4725d0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4725d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4725d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x4725D4u;
    {
        const bool branch_taken_0x4725d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4725d4) {
            ctx->pc = 0x4725E8u;
            goto label_4725e8;
        }
    }
    ctx->pc = 0x4725DCu;
    // 0x4725dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4725dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4725e0: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x4725e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x4725e4: 0x0  nop
    ctx->pc = 0x4725e4u;
    // NOP
label_4725e8:
    // 0x4725e8: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x4725e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x4725ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4725ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4725f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4725f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x4725f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4725f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4725f8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4725f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4725fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x4725FCu;
    {
        const bool branch_taken_0x4725fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4725fc) {
            ctx->pc = 0x472610u;
            goto label_472610;
        }
    }
    ctx->pc = 0x472604u;
    // 0x472604: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x472604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x472608: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x472608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x47260c: 0x0  nop
    ctx->pc = 0x47260cu;
    // NOP
label_472610:
    // 0x472610: 0x8ea40054  lw          $a0, 0x54($s5)
    ctx->pc = 0x472610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x472614: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x472614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x472618: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x472618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x47261c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x47261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x472620: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x472620u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x472624: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x472624u;
    {
        const bool branch_taken_0x472624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x472624) {
            ctx->pc = 0x472638u;
            goto label_472638;
        }
    }
    ctx->pc = 0x47262Cu;
    // 0x47262c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47262cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x472630: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x472630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x472634: 0x0  nop
    ctx->pc = 0x472634u;
    // NOP
label_472638:
    // 0x472638: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x472638u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x47263c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x47263cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x472640: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x472640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x472644: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x472644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x472648: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x472648u;
    {
        const bool branch_taken_0x472648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47264Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472648u;
            // 0x47264c: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472648) {
            ctx->pc = 0x4722C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4722c8;
        }
    }
    ctx->pc = 0x472650u;
    // 0x472650: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x472650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x472654: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x472654u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x472658: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x472658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47265c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47265cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x472660: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x472660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x472664: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x472664u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472668: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x472668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47266c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47266cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x472670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x472674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x472678: 0x3e00008  jr          $ra
    ctx->pc = 0x472678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472678u;
            // 0x47267c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x472680u;
}
